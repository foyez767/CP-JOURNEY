#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    vector<int>vec {1,2,3,4,5};
    int target=0;
    cin>>target;
    int lo=0,hi=(vec.size()),mid=0;
    while((hi-lo)>1){
        mid=(hi+lo)/2;
        if(target>vec[mid])
            lo=mid+1;
        else
            hi=mid;
    }
    if(vec[lo]==target)
        cout<<lo<<endl;
    else if(vec[hi]==target)
        cout<<hi<<endl;
    else{
        vec.push_back(target);
        sort(vec.begin(),vec.end());
        for(int i=0;i<vec.size();i++){
            if(vec[i]==target)
                cout<<i<<endl;
        }
    }
    return 0;
}