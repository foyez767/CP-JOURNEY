//Sep/05/2022 04:39UTC-6
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;
 
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    ll t=0;
    cin>>t;
    while(t--){
        ll n=0,start_h=0,start_m=0;
        cin>>n>>start_h>>start_m;
        ll diff=0,h=0,m=0,x=0,hr=0,mi=0,y=0;
        y=(start_h*60)+start_m;
        vector<ll>vec;
        for(int i=0;i<n;i++){
            cin>>h>>m;
            x=(h*60)+m;
            diff=x-y;
            if(diff<0) diff=(1440+diff);
            vec.push_back(diff);
        }
        auto it=min_element(vec.begin(),vec.end());
        ll min=*it;
        while(min>=60){
            hr++;
            min-=60;
        }
        if(min>=0) mi=min;
 
        cout<<hr<<" "<<mi<<nn;
    }
    
    return 0;
}