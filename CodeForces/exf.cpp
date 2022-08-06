#include<bits/stdc++.h>
#define ll long long
#define a 1000000000000
#define b 1000000
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    ll n=0,cnt=0,c=0;
    cin>>n;
    vector<ll>val(n);
    for(ll i=0;i<n;i++){
        cin>>c;
        val[i]=c;
    }
    vector<bool>vec(a+1,true);
    vector<int>prime;
    vec[1]=false;
    //all prime numbers between 2 to sqrt(n)
    for(int i=2;i*i<=a;i++){
        if(vec[i]){
            for(int j=i*i;j<=a;j+=i){
                vec[j]=false;
            }
        }
    }
    //taking prime numbers in a new vector
    for(int i=2;i*i<=a;i++){
        if(vec[i])
            prime.push_back(i);
    }

    ll j=0,x=0,y=0;
    while(n--){
        cnt=2;
        x=val[j];
        for(ll i=0;i*i<=x;i++){
            y=prime[i];
            if(x==(y*y))
                cnt++;
        }
        if(cnt==3)
            cout<<"YES\n";
        else
            cout<<"NO\n";

        j++;
    }

    return 0;
}