#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    vector<int> vec(10);
    int val=0,pos=0;
    for(int i=0;i<10;i++){
        cin>>vec[i];
    }
   
    while(true){
        pos=vec[0];
        pos=vec[pos];
        val=vec[pos];
        cout<<val<<"\n";
        break;
    }

    return 0;
}