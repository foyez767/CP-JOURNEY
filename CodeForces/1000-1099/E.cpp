//author : Team RUET_AC_Hunters
#include <bits/stdc++.h>
using namespace std;

#define nn "\n"
#define ll long long
#define yes "YES"
#define no "NO"


vector<ll> p[1005];
void solve()
{

    ll rankk[1005]{},index[1003]{};

    ll m=0,a=0;
    cin>>m;
    vector< pair<ll,ll>> vec;
    for(ll i=1; i<=m; i++)
    {
        cin>> a;
        vec.push_back(make_pair(a,i));
    }
   
    sort(vec.rbegin(),vec.rend());

    // for(auto v: vec){
    //     cout<< v.first<<" "<<v.second<<nn;
    // }
    ll k=1;
    for(auto v: vec)
    {
        rankk[k]=v.second;
        k++;
    }
    // for(ll i=1; i<=m; i++){
    //     cout<< rankk[i]<<" ";
    // }

    ll x=0;
    map<ll,vector<ll>>mp;
    for(ll i=1;i<=m; i++)
    {
        for(ll j=1;j<=m;j++){
            cin>> x;
            mp[i].push_back(x);
        }

    }

    // for(auto x: mp){
    //     cout<<x.first<<": ";
    //     for(auto mm: x.second)
    //         cout<< mm<<" ";
    //     cout<<nn;
    // }
    bool mark[m+1] {false};
    ll given[m+1] {};
    ll y=0,flag=0;

    for(ll i=1; i<=m; i++)
    {
        x=rankk[i];
        for(auto m: mp[x]){
            y=m;
            if(mark[y]==false){
                mark[y]=true;
                given[x]=y;
                break;
            }
        }
    }

    for(ll i=1; i<=m; i++)
    {
        cout<< given[i]<<nn;
    }
   }

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //ll t;  cin>>t;  for(ll i=1;i<=t;i++)
    {
        solve();
    }

    return 0;
}