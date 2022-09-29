// //Sep/10/2022 22:24UTC-6	
#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    ll t=0;
    cin>>t;
    while(t--){
        ll n=0,m=0,x=0,y=0,d=0;
        cin>>n>>m>>x>>y>>d;
        vector<pair<int,int>>vec;
        vec.push_back(make_pair(x,y));
        vec.push_back(make_pair(x,y+d));
        vec.push_back(make_pair(x,y-d));
        vec.push_back(make_pair(x+d,y));
        vec.push_back(make_pair(x-d,y));

        ll row[n+1]{},col[m+1]{};
        for(auto v:vec){
            if(v.first>n) row[n]=1;
            else if(v.first<=0) row[1]=1;
            else row[v.first]=1;

            if(v.second>m) col[m]=1;
            else if(v.second<=0) col[1]=1;
            else col[v.second]=1;
        }
        if((row[n]==0 && col[1]==0)|| (row[1]==0 && col[m]==0))
            cout<<n+m-2<<nn;
        else cout<<-1<<nn;  
    vec.clear();     
    }
    
    return 0;
}

//
// #include<bits/stdc++.h>
// #define ll long long
// #define nn "\n"
// using namespace std;

// int main(){
// ios::sync_with_stdio(0);
// cin.tie(0);
// ll t=0;
// cin>>t;
// while(t--){
//     ll n=0,m=0,x=0,y=0,d=0;
//     cin>>n>>m>>x>>y>>d;
//     if((x-d<=1 || y+d>=m) && (x+d>=n || y-d<=1))
//         cout<<-1<<nn;
//     else cout<<n+m-2<<nn;
// }
//    return 0;
// }