//Aug/04/2022 11:03UTC-6 :17A
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    ll n=0,k=0,tp=0,x=0,y=0,cnt=0;
    cin>>n>>k;
    vector<bool>vec(n+1,true);
    vector<int>prime;
    vec[1]=false;
    //all prime numbers between 2 to n
    for(int i=2;i*i<=n;i++){
        if(vec[i]){
            for(int j=i*i;j<=n;j+=i){
                vec[j]=false;
            }
        }
    }
    //taking prime numbers in a new vector
    for(int i=2;i<=n;i++){
        if(vec[i])
            prime.push_back(i);
    }
    //counting how many prime numbers are there
    tp=prime.size();
    //condition checking   
    if(k>=tp)
        cout<<"NO"<<endl;
    else{
        for(int i=2;i<=n;i++){
            if(vec[i]){
                for(int j=0;j<prime.size();j++){
                    x=prime[j]+prime[j+1];
                    if(x==(i-1)){
                        cnt++;
                        break;;
                    }
                       
                }
            }
            
        }
        if(cnt>=k)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
    return 0;
}