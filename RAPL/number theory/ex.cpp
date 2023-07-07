//**********In the name of Allah, most Gracious and Merciful******
#include<bits/stdc++.h>
using namespace std;

int gcd_(long long  a, long long b)
{
    if (a == 0)
        return b;
    return gcd_(b % a, a);
}

void solve(){
    long long x=0,y=0,cnt=0,gcd=0,i=0;
    scanf("%lld %lld",&x,&y);
    gcd=gcd_(x,y);

    for(i=1; i<=sqrt(gcd) ;i++){
        if(i*i==gcd) cnt++;
        else if(gcd%i==0){
            cnt=cnt+2;
        }
    }
    printf("%lld\n",cnt);
 
 }
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
long long t=1;
cin>>t;
while(t--)   solve();
    
    return 0;
}