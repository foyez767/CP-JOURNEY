//behind the scene:
//If you think very carefully then you can see that there is a even number before and after an odd numbers
//for example ,if range is from 3 to 7(even number=4,6 which is divisible by 2)
//so it is clear that most time we get 2 as a divisor
#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
  
    long long r=0,l=0;
    cin>>r>>l;
    if(r != l)
        cout<<2<<endl;
    else
        cout<<r<<endl;

    return 0;
}