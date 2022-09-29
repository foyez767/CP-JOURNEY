#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
ll n=0,five=0,hero=0;
cin>>n;
ll arr[n+1]{};
for(int i=1;i<=n;i++){
    cin>>arr[i];
    if(arr[i]==0)
        hero++;
    else
        five++;
}
if(hero==0)
    cout<<-1<<endl;     //no zero no number have that is divisible by 90
else if(five<9)
    cout<<0<<endl;      //since only multiple of 90 is 0
else {
    ll digitSum=0,x=0;
    for(int i=1;i<=five;i++){
        digitSum+=5;
        if(digitSum%9 ==0)
            x=i;
    }
    for(int k=1;k<=x;k++)
        cout<<5;
    for(int k=1;k<=hero;k++)
        cout<<0;
}
    return 0;
}