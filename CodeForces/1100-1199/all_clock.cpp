//**********In the name of Allah, most Gracious and Merciful******
//Sep/27/2022 19:05UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

vector<ll>hrs;
void min_hr(vector<ll>vec){
    ll hr=0,mi=0,ti=0;
    for(ll i=0;i<vec.size();i++){
        hr=vec[i]/60;
        mi=vec[i]-hr*60;
        ti=hr*100+mi;
        hrs.push_back(ti);
    }
}

  
void solve(){
    ll x=0,n=0,init=0,temp=0,cnt=0,a=0,b=0,c=0,d=0,hr=0,mi=0;
    string s,st;
    cin>>s>>x;
    a=(ll)(s[0]-'0')*10;
    b=(ll)(s[1]-'0')*1;
    hr=(a+b)*60;
    c=(ll)(s[3]-'0')*10;
    d=(ll)(s[4]-'0')*1;
    n=hr+c+d;
    init=n;
    // s=n;
    vector<ll>vec;
    while(1){
        vec.push_back(n);
        n+=x;
        if(n>=1440){
            temp=n-1440;
            n=temp;
        }
        if(n==init) break;
    }
    min_hr(vec);
    for(ll i=0;i<hrs.size();i++){
        n=hrs[i];
        d=n%10;
        n/=10;
        c=n%10;
        n/=10;
        b=n%10;
        n/=10;
        a=n%10;
        s=to_string(a)+to_string(b)+to_string(c)+to_string(d);
        st=s;
        reverse(st.begin(),st.end());
        if(s==st)
            cnt++;

    }
    cout<<cnt<<nn;
    hrs.clear();

 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--){
    solve();
}
    
    return 0;
}