//**********In the name of Allah, most Gracious and Merciful******
//Nov/06/2022 08:07UTC-
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve(){
    ll n=0,m=0,sum=0,a=0,b=0,x=0,y=0;     cin>> n>> m;
    ll arr [n+1] [m+1] {};

    for(ll i=1; i<=n; i++){
        for(ll j=1; j<=m; j++){
            cin>> arr[i][j];
        }
    }
    vector<ll> summ;

    for(ll i=1; i<=n; i++)
    {
        for(ll j=1; j<=m; j++)
        {
            x=i,y=j,sum=0;
            a=x,b=y;
            while(1){
                if(a<1 or b<1)
                    break;
                sum+=arr[a][b];
                a--,b--;
            }
            a=x,b=y;

            while(1){
                if(a<1 or b>m)
                    break;
                sum+=arr[a][b];
                a--,b++;
            }
            a=x,b=y;
            
            while(1){
                if(a>n or b<1)
                    break;
                sum+=arr[a][b];
                a++,b--;
            }
            a=x,b=y;
            
            while(1){
                if(a>n or b>m)
                    break;
                sum+=arr[a][b];
                a++,b++;
            }
            sum-=(3*arr[x][y]);
            summ.push_back(sum);
        }
    }

    cout<< *(max_element(summ.begin(),summ.end())) <<nn;
 
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
auto start_time = clock();
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}