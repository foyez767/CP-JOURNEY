#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  vector<int>vec {1,0,3,2};
   std::sort(vec.begin(),vec.end());
        for(int i=0;i<=vec.size();i++){
            if(i != vec[i]){
                cout<<i<<endl;break; 
                }  
            }
    return 0;
        }
