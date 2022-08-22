//Aug/19/2022 03:57UTC-6: 43A
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    int n=0;
    cin>>n;
    vector<string>vec(n);
    for(int i=0;i<n;i++)
        cin>>vec[i];
    vector<string>cpy;
    array<int,101>counter {};
    ll cnt=0;
    int j=0,a=0;
    string s;
    while(!vec.empty()){
        cnt=0;
        s=vec[0];
        cpy.push_back(vec[a]);
        for(int i=0;i<vec.size();i++){
            if(vec[i]==s){
                cnt++;
                vec.erase(vec.begin()+i);
                i--;
            }
        }
        counter[a]=cnt;
        a++;
        if(vec.size()==0)
            break;
    }
    ll max=0,pos=0;
    for(int i=0;i<counter.size();i++){
        if(max<counter[i]){
            max=counter[i];
            pos=i;
        }
    }
    cout<<cpy[pos]<<nn;
    return 0;
}