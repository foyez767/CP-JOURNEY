//Aug/23/2022 08:33UTC-6 :149A
#include<bits/stdc++.h>
#define outer0(b) for(int i=0;i<b;i++)
#define outer1(b) for(int i=1;i<=b;i++)
#define ll long long
#define nn "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    ll k=0,cnt=0;
    vector<int>mnth(12);
    cin>>k;
    outer0(12) cin>>mnth[i];
    sort(mnth.begin(),mnth.end());
    ll max=0,min=0,j=12;
    while(j){
        max=mnth[j-1];
        if(min<k){
            cnt++;
            min+=(max);
        }else
            break;
        j--;
    }
    (min<k)? cout<<-1<<nn : cout<<cnt<<nn;
    return 0;
}