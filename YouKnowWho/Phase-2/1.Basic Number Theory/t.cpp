//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define lim 10000000
#define nn "\n"
using namespace std;

vector<bool> marks(lim+5,true);
vector<ll> primes;

void solve(){
    ll n=0,j=0,i=0,cur=0,cnt=0,x=0,y=0;     cin>> n;
    // j= lower_bound(primes.begin(),primes.end(),n)-primes.begin()-1;

    // while(j-i>=0){
    //     cur= primes[i]+primes[j];
    //     if(n == cur){
    //         cnt++, i++, j--;
    //     }else if(cur > n) j--;
    //     else if(cur < n)  i++;
    // }

    for(i=0; i<primes.size(); i++){
        x= primes[i];
        y= n - x;
        if(x > y) break;
        if(marks[y]) cnt++;

    }
    cout<< cnt <<nn;
 }
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;

    for(ll i=2; i*i<=lim; i++){
        if(marks[i]){
            for(ll j= i*i; j<=lim; j+=i)
                marks[j]= false;
        }
    }

    for(ll i=2; i<=lim; i++){
        if(marks[i])
            primes.push_back(i);
    }
    cin>>t;
    // while(t--)   solve();
    for(ll i=1; i<=t; i++){
        cout<< "Case "<<i<<": ";
        solve();
    }
    
    return 0;
}