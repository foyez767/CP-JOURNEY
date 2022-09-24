//Sep/13/2022 11:08UTC-6
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
    ll n=0,min=0,max=0,mod=0,flag=0;
    cin>>n;
    if(n%2!=0 || n<=3) cout<<-1<<nn;
    else{
        if(n%6==0){
        min=n/6;
    }else{
        min=n/6;
        mod=n%6;
        while(mod%4!=0){
            min--;
            mod+=6;
        }
        min+=(mod/4);
    }

    if(n%4==0) max=n/4;
    else{
        max=n/4;
        mod=n%4;
        while(mod%6!=0){
            max--;
            mod+=4;
        }
        max+=(mod/6);
    }
     cout<<min<<" "<<max<<nn;
    }

}    
    return 0;
}

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
//     ll n=0,batti=0;
//     cin>>n;
//     if(n%2!=0 || n<=3) batti=1;
//     (batti==1)? cout<<-1<<nn : cout<<(n/3)<<" "<<(n/2)<<nn;
// }
   
//     return 0;
// }

