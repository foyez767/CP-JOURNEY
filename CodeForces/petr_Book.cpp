//Aug/18/2022 23:22UTC-6 : 139A
#include<bits/stdc++.h>
#define ll long long
#define nn  "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    int n=0;
    cin>>n;
    int arr[7]{};
    for(int i=0;i<7;i++)
        cin>>arr[i];
    int cnt=0;
    while(n>0){
        for(int i=0;i<7;i++){
            cnt++;
            n-=arr[i];
            if(n<=0)
                break;
        }
    }
    (cnt%7==0)? cout<<7<<nn : cout<<cnt%7<<nn;
    return 0;
}