//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define lim 50000
#define mod 1e9+7
#define nn "\n"

using namespace std;

ll multiplication(ll a, ll b,ll m){
    ll res = 0; 
    a %= m;
 
    while (b) {
        if (b % 2)
            res = (res + a) % m;
        a = (2 * a) % m;
        b >>= 1;
    }
    return res;
    
}

vector<bool> primes(lim+3,true);

void solve(){
    ll n=0,x=0,ans=0,p=0,k=0;     cin>> n;
    if(n==1 or n==0){
        cout<< 1 <<nn;
        return;
    }

    map<ll,ll> cnt;
    for(ll i=2; i<=n; i++){
        if(primes[i]){
            k= 1, p=0,x=0;
            while(1){
                x= (n/((ll)(pow(i,k))));
                if(x==0) break;
                p+=x;
                k++;
            }
            cnt[i]=p;
        }
    }

    // for(auto c: cnt)
    //     cout<< c.first<<" : "<<c.second<<nn;
    vector<ll> vec;
    for(auto m: cnt){
        vec.push_back(m.second+1);
    }
   ans= vec[0];
   for(ll i=1; i<vec.size(); i++){
        ans= multiplication(ans, vec[i], mod);
   }
   cout<< ans <<nn;
 
 }
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;

    primes[0] = primes [1]= false;
    for(ll i=2; i*i<=lim; i++){
        if(primes[i]){
            for(ll j=i*i; j<=lim; j+=i)
                primes[j] = false;
        }
    }

    cin>>t;
    while(t--)   solve();
    
    return 0;
}