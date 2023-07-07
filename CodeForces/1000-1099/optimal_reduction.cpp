//**********In the name of Allah, most Gracious and Merciful******
//Oct/25/2022 10:57UTC-6
#include<bits/stdc++.h>
#define ll long long
#define yes "YES"
#define no "NO"
#define nn "\n"
using namespace std;
 
void solve(){
    ll n=0,sum_sort=0,sum_init=0,x=0;      cin>> n;
    vector<ll> vec(n,0);
    for(auto &x: vec)       cin>> x;

    if(is_sorted(vec.begin(),vec.end()))
        cout<< yes <<nn;
    else{
        ll len= vec.size();
        sum_init= vec[len-1];
        for(int i=len-2; i>=0 ; i--)
        {
            if(vec[i]>vec[i+1])
                sum_init+=(vec[i]-vec[i+1]);
        }

        sort(vec.begin(),vec.end());
        sum_sort= vec[0];
        for(int i=1 ;i<len ; i++)
        {
            sum_sort+=(vec[i]-vec[i-1]);
        }
        if(sum_sort>=sum_init)  cout<< yes <<nn;
        else cout<< no <<nn;
    }
 
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}