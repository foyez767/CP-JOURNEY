#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    int n=0,x=0,y=0,z=0,a=0;
    cin>>n>>x>>y>>z;
  
    vector<int>math(n);
    vector<int>english(n);
    vector<int>ma(n);
    vector<int>en(n);
    vector<int>pos;
    for(int i=0;i<n;i++){
        cin>>a;
        math.push_back(a);
    }
    for(int i=0;i<n;i++){
        cin>>a;
        english.push_back(a);
    }
    math.swap(ma);
    english.swap(en);
    int count=0,max=math[0];
    std::sort(math.begin(),math.end());
   while(count != x){
     
        
    }
    count++;
   }
    return 0;
}