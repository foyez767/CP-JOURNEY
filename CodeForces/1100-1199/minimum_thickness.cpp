//**********In the name of Allah, most Gracious and Merciful******
//Oct/21/2022 06:25UTC-6	
#include<bits/stdc++.h>
#define ll long long
#define MAX (1<<30)
#define nn "\n"
using namespace std;

void solve(){
    ll n=0,sum1=0,sum2=0,cnt1=0,cnt2=0,x=0,ans=(1<<30),maxi=(1<<30),flag=0,j=0;     cin>> n;
    vector<ll>vec(n,0),prefix(n,0),each_seg;
    for(auto &x: vec)      cin>> x;

    partial_sum(vec.begin(),vec.end(),prefix.begin());

    for(ll i=0;i<n; i++){
        flag=0,cnt2=0,sum2=0;
        sum1=prefix[i];
        each_seg.push_back(i+1);
        for(j=i+1; j<n; j++){
            cnt2++;
            sum2+=vec[j];
            if(sum2<sum1) continue;
            else if (sum2==sum1){
                each_seg.push_back(cnt2);
                cnt2=0;
                sum2=0;
                continue;
            }else{
                flag=1;
                break;
            }
        }
        if(flag==1 or sum2!=0) each_seg.clear();
        else{
            maxi= *(max_element(each_seg.begin(),each_seg.end()));
            ans=min(ans,maxi);
            each_seg.clear();
        }     
    }
    (ans==MAX) ? cout << n <<nn : cout << ans <<nn;

 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}