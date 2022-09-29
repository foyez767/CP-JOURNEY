#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    int n=0,a=0,b=0,c=0;
    cin>>n;
    vector<int>vec;
    vector<int>summ;
    
    for(int i=0;i<(n*3);i++){
        cin>>a;
        vec.push_back(a);
    }
    long long sum=0;
    for(int i=0;i<(n*3);i+=3)
        sum+=vec[i];
    summ.push_back(sum);
    sum=0;
    for(int i=1;i<(n*3);i+=3)
        sum+=vec[i];
    summ.push_back(sum);
    sum=0;
    for(int i=2;i<(n*3);i+=3)
        sum+=vec[i];
    summ.push_back(sum);
    sum=0;
    int flag=0;
    for(int i=0;i<summ.size();i++){
        if(summ[i] != 0){
            flag=1;break;;
        }
    }
    if(flag==0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    
    return 0;
}