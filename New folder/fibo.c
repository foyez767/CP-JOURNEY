//nth term in fibo series
#include<stdio.h>

int fibo(int n){
    if(n<=1)
        return n;
    return fibo(n-1)+fibo(n-2);

}
int main(){
    int n=0;
    scanf("%d",&n);
    long long fi=fibo(n);
    
    printf("%lld",fi);


    return 0;
}