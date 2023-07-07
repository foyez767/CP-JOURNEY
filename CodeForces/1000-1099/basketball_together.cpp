//**********In the name of Allah, most Gracious and Merciful******
//Oct/03/2022 18:17UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

void solve(){
    ll n=0,d=0,i=0,j=0,cnt=0,x=0,max=0,flag=0,sum=0;
    vector<ll>vec;
    cin>>n >>d;
    j=n-1;
    for(i=0 ;i<n;i++){
        cin>>x;
        vec.push_back(x);
    }
    i=0;
    sort(vec.rbegin(),vec.rend());

    while(i<=j){
        max=vec[i];
        sum=vec[i];
        if(sum>d){
            cnt++;
            i++;
        }
        else{
            while(sum<=d){
                if(i>=j){
                    flag=1;
                    break;
                }
                sum+=max;
                j--;
            }
            if(sum>d){
                cnt++;
                i++;
            }
            if(flag==1) break;
        }
    }
    cout<< cnt <<nn;
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
// cin>>t;
while(t--)   solve();
    
    return 0;
}