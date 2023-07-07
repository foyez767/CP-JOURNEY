#include<bits/stdc++.h>
#define outer0(b) for(int i=0;i<b;i++)
#define outer1(b) for(int i=1;i<=b;i++)
#define ll long long
#define nn "\n"
using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    while(1){
        ll l=0,w=0;
        cin>>l>>w;
        if(l==0 && w==0){
            return 0;
        }
        long double ab=sqrt(l*l+w*w);
        long double x=ab/4;
        long double a=sqrt(x*x-(double)(l/4)*(double)(l/4));
        ll ans=(0.75*l)+x+(w-a);
        printf("%.4f\n",ans+0.25);
        
    }
    
    return 0;
}