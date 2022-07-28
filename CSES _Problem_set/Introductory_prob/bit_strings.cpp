#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;


// long long pow_mod(int n){
//     if(n==0)
//         return 1;
//     long long half=pow_mod(n/2);
//     long long res=(half*half)%MOD;
//     if(n%2)
//         return (res*2)%MOD;
    
// return res;
// }

long long pow_mod(int x,int n,int m){
    if(n==0)
        return 1;
    long long t=pow_mod(x,n/2,m);
    if(n%2==0)
        return t*t % m;
    else
        return x*t*t %m;
    
}
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    int n=0;
    cin>>n;
    cout<<pow_mod(2,n,MOD)<<"\n";
     
    return 0;
}