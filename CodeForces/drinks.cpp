//Aug/10/2022 21:41UTC-6 : 200B
#include<bits/stdc++.h>
#define ld long double
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    int n=0;
    cin>>n;
    int arr[n]{};
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    printf("%.15f\n",(double)sum/n);
    //cout<<setprecision(15)<<(double)sum/n<<endl;
      
    return 0;
}