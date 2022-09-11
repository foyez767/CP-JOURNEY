//Aug/24/2022 21:33UTC-6:337A
#include<bits/stdc++.h>
#define outer0(b) for(int i=0;i<b;i++)
#define outer1(b) for(int i=1;i<=b;i++)
#define ll long long
#define nn "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    ll n=0,m=0,x=0,k=1,p=0;
    cin>>n>>m;
    x=n;
    ll arr[m+1] {};
    outer1(m) cin>>arr[i];
    sort(arr,arr+(m+1));
    vector<ll>diff;
    for(int i=k;i<=(m-n+1);i++){
        for(int j=x;j<=m;j++){
            diff.push_back((arr[j]-arr[i]));
            x++;
            break;
        }
    }
    ll min=diff[0];
    for(int i=1;i<diff.size();i++){
        if(diff[i]<min) min=diff[i];
    }
    cout<<min<<nn;
      
    return 0;
}