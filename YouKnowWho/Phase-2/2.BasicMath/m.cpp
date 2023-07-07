#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> base = {128,64,32,16,8,4,2,1};

string binToDec(string s){
    ll x = 0;
    for(ll i = 0; i < s.length(); i++){
        if(s[i] == '1'){
            x += base[i];
        }
    }
return to_string(x);
}

void solve(){
   string s,str,temp;    cin >> s >> str;
    vector<string> vec;

   for(ll i = 0; i < str.length(); i++){
        if(str[i] == '.'){
            vec.push_back(temp);
            temp.clear();
        }else temp.push_back(str[i]);
   }
   vec.push_back(temp);

    string man;
    for(ll i = 0; i < vec.size(); i++){
        string ss = binToDec(vec[i]);
        man += ss;
        if(i != vec.size()-1)
            man.push_back('.');
    }

    if(man == s) cout << "Yes\n";
    else cout << "No\n";
 
 }

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    for(ll i = 1; i<=t; i++){
        cout << "Case " << i << ": ";
    solve();
}
    
    return 0;
}