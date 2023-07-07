#include <bits/stdc++.h>
using namespace std;
int gcd(long long  a, long long b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long  t,n,i,divisor,a,b;
    scanf("%d",&t);
    while(t--)
    {
         scanf("%lld %lld",&a,&b);
        n=gcd(a,b);
        divisor=0;
        for(i=1; i<=sqrt(n); i++)
        {
            if(i*i==n)
                divisor++;
            else if(n%i==0)
                divisor=divisor+2;
        }
        printf("%d\n",divisor);
    }
}