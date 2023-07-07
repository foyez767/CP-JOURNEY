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
        ll x=0,min=400,max=0,k=0;
        vector<ll>vec;
        
        for(int i=0;i<3;i++){
            cin>>x;
            vec.push_back(x);
            if(vec[i]>max) max=vec[i];
            if(vec[i]<min) min=vec[i];
        }
        cin>>k;
        cout<<"Case "<<j<<": ";
        if(vec[0]==vec[1] && vec[1]==vec[2]){
            cout<<"Peaceful"<<nn;
            break;
        }
        ll mid=0,flag=0;
        for(int i=0;i<3;i++){
            if(vec[i]>min){
                mid=vec[i];
                break;
            }else if(vec[i]==vec[i+1]){
                mid=vec[i];
                break;
            }
        }
        if(mid==0) mid=min;

        while((max-k)>=k){
            min+=k;
            max-=k;
            if(min==mid && max==mid){
                cout<<"Peaceful"<<nn;
                flag=1;
                break;
            }
            if((max-k)>=mid && (max-k)>=k){
                mid+=k;
                max-=k;
            }
        }
        if(flag!=0)
            break;
        else cout<<"Fight"<<nn;

    j++;
        
    }
    
    return 0;
}