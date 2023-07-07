//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

bool canConstruct(vector< string > &vec){
    ll total = 0;
    for(int i = 0; i<vec.size(); i++){
        string s = vec[i];
        for(int i = 0; i < s.length(); i++){
            total += (s[i] - '0');
        }
    }

    if(total % 3)
        return false;
return true;
}
 
void solve(){
    ll n, x;   cin>> n;
    vector< string > vec;
    for(int i = 0; i < n; i++){
        cin >> x; 
        vec.push_back(to_string(x));
    }

    if(canConstruct(vec))
        cout<< "Yes" <<nn;
    else
        cout<< "No" <<nn;
 }

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    while(t--)   solve();
    
    return 0;
}