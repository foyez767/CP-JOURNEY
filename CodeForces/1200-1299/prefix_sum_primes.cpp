//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

vector<ll>primes;

void sieve(vector<bool> &vec,long long last){
    vec[0]=vec[1]=false;
    for(ll i=2; i<=last ;i++){
        if(vec[i]){
            primes.push_back(i);
            for(ll j=i*i ;j<=last ;j+=i)
                vec[j]=false;
        }
    }

}
 
void solve(){
    ll n=0,x=0,last=0;
    cin>>n;
    vector<ll>ele;
    for(ll i=0; i<n;i++){
        cin>>x;
        ele.push_back(x);
        last+=x;
    }
    vector<bool>vec(last+1,true);
    sieve(vec,last);
    sort(ele.begin(),ele.end());
    ll val=0,i=0,j=ele.size()-1,k=0;
    if(n==1 and ele[0]==1){
        cout<<1<<nn;
        return ;
    }
    while(n){
        if(k>=primes.size())
            return;
        x=primes[k];
        if((val+ele[j])<=x){
            val+=ele[j];
            if(val==x) k++;
            cout<<ele[j]<<" ";
            j--;
            n--;
        }else if(val+ele[i]<=x){
            val+=ele[i];
            if(val==x) k++;
            cout<<ele[i]<<" ";
            i++;
            n--;
        }
    }
    
 
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll t=1;
// cin>>t;
while(t--)   solve();
    
    return 0;
}

//main function
// ll n=0,one=0,two=0,x=0;
//     cin>>n;
//     vector<ll>vec;
//     for(ll i=0;i<n;i++){
//         cin>>x;
//         vec.push_back(x);
//         if(x==1) one++;
//         else two++;
//     }
//     if(one==n && two==0){
//         for(auto v:vec)
//             cout<<v<<" ";
//         cout<<nn;
//     }else if(one==0 && two==n){
//         for(auto v:vec)
//             cout<<v<<" ";
//         cout<<nn; 
//     }else if(two!=0 && one!=0){
//         cout<<2<<" "<<1<<" ";
//         two--;
//         one--;
//         while(two){
//             cout<<2<<" ";
//             two--;
//         }
//         while(one){
//             cout<<1<<" ";
//             one--;
//         }
//         cout<<nn;           
//     }