#include<bits/stdc++.h>
#define outer0(b) for(int i=0;i<b;i++)
#define outer1(b) for(int i=1;i<=b;i++)
#define ll long long
#define nn "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    ll t=0,j=1;
    cin>>t;
    while(t--){
        cout<<"Case "<<j<<": ";
        ll k=0,a=0,b=0,c=0;
        vector<ll>vec(3);
        ll min=1000,max=0;
        for(int i=0;i<3;i++){
            cin>>a;
            vec.push_back(a);
        }
        cin>>k;
        for(int i=0;i<3;i++){
            cout<<vec[i]<<" ";
        }

        // for(int i=0;i<3;i++){
        //     if(vec[i]>max)
        //         max=vec[i];
        //     if(vec[i]<min)
        //         min=vec[i];
        // }
        
        // if(vec[0]==vec[1] && vec[1]==vec[2]){
        //     cout<<"Peaceful"<<nn;
        //     break;
        // }        
        // ll mid=0;
        
        // for(int i=0;i<3;i++){
        //     if(vec[i]!=max && vec[i]!=min)
        //         mid=vec[i];
        // }
        // while((max-k)>=k){
        //     min+=k;
        //     max-=k;
        //     if(min==max && min==mid){
        //         cout<<"Peaceful"<<nn;
        //     }
        // }
        // cout<<"Fight"<<nn;

       


        j++;
        
    }
    
    return 0;
}