//Aug/04/2022 21:26UTC-6 : 762A
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    ll n=0,k=0;
    cin>>n>>k;
    vector<ll>div;
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            div.push_back(i);
            if(i != (n/i))
                div.push_back(n/i);
        }
    }
    std::sort(div.begin(),div.end());
    ll size=div.size();
    if(size<k)
        cout<<-1<<endl;
    else
        cout<<div[k-1]<<endl;

    return 0;
}