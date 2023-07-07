//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
 
void solve(){
    ll n=0,j=1;             cin>>n;
    string s1,s2,s;
    char c1,c2;
    vector<string>vec;
    for(ll i=0; i<n-2; i++){
        cin>>s1;
        vec.push_back(s1);
    }
    s=vec[0];
    for(ll i=1; i<vec.size(); i++){
        s1=vec[i];
        c1=s1[0];
        if(c1==s[j]) {
            s+=s1[1];
            j++;
        }
        else {
            s+=s1;
            j+=2;
        }
    }
    cout << s <<nn;
 
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
// cin>>t;
while(t--)   solve();
    
    return 0;
}