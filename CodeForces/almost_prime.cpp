//Aug/04/2022 09:05UTC-6 :26A
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    int n=0,cnt=0;
    cin>>n;
    vector<bool>vec(n+1,true);
    int count[n+1] {0};
    vec[1]=false;
    //all prime numbers between 1 to n
    for(int i=2;i*i<=n;i++){
        if(vec[i]){
            for(int j=i*i;j<=n;j+=i)
                vec[j]=false;
        }
    }
    //division part(for individual number checking if num%prime==0)
    for(int i=1;i<=n;i++){
        for(int j=1;j<=vec.size();j++){
            if(vec[j]){
                if(i%j==0){
                    cnt++;
                }
            }
        }
        count[i]=cnt;
        cnt=0;
    }
    ll sum=0;
    //counting how many almost prime
    for(int i=1;i<=n;i++){
        if(count[i]==2){
            sum++;
        }
    }
    cout<<sum<<endl;
    
    return 0;
}