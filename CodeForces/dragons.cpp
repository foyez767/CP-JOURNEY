//Aug/24/2022 04:58UTC-6 :230A
#include<bits/stdc++.h>
#define outer0(b) for(int i=0;i<b;i++)
#define outer1(b) for(int i=1;i<=b;i++)
#define ll long long
#define nn "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    ll n=0,strength=0,x=0,y=0;
    cin>>strength>>n;
    vector<ll>dragon_str;
    vector<ll>bonus_point;
    while(n--){
        cin>>x>>y;
        dragon_str.push_back(x);
        bonus_point.push_back(y);
    }
    ll flag=0;
    for(int i=0;i<dragon_str.size();i++){
        if(strength>dragon_str[i]){
            flag=1;
            strength+=(bonus_point[i]);
            dragon_str.erase(dragon_str.begin()+i);
            bonus_point.erase(bonus_point.begin()+i);
            i=-1;
        }else{
            flag=0;
        }
    }    
    (flag==1)? cout<<"YES"<<nn : cout<<"NO"<<nn;
    return 0;
}