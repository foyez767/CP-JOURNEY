#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n=0;
    cin>>n;
    cout<<n<<" ";
    while(n){
        if(n==1){
            // cout<<n<<endl;
            break;
        }else if(n%2==0){
            n/=2;
            cout<<n<<" ";
        }else if(n%2 != 0){
            n=(n*3)+1;
            cout<<n<<" ";
        }
    }

    return 0;
}