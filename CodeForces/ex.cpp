#include<bits/stdc++.h>
#define ll long long
#define nn  "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    array<int,5>arr {};
    for(int i=0;i<5;i++){
        cin>>arr[i];
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(arr.begin(),arr.end());
    for(auto a:arr)
        cout<<a<<" ";
    auto max=max_element(arr.begin(),arr.end());
    auto min=min_element(arr.begin(),arr.end());
    int sum=accumulate(arr.begin(),arr.end(),0);
    cout<<endl;
    cout<<*min<<" "<<*max<<" "<<sum<<nn;
    return 0;
}