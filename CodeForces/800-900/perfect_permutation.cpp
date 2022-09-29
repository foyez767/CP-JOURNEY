//Aug/10/2022 22:17UTC-6 : 233A
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    int n=0;
    cin>>n;
    if(n==1 || (n%2)!=0){
        cout<<-1<<endl;
        return 0;
    }
    while(n){
        cout<<n<<" ";
        n--;
    }
    return 0;
}