#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    int n=0,k=0,x=0,y=0,cnt=0;
    cin>>n>>k;
    vector<int>vec;
    for(int i=0;i<n;i++){
        cin>>x;
        vec.push_back(x);        
    }
    y=vec.at(k-1);
    for(int i=0;i<n;i++){
        if(vec[i]>=y && vec[i]>0)
            cnt++;
    }
    cout<<cnt<<endl;
    
    return 0;
}