#include<stdio.h>

long long factorial(int  n){
    if(n!= 0)
        return n*factorial(n-1);
    else
        return 1;

}

int main(){
    int n=0;
    scanf("%d",&n);
    long long fac=factorial(n);
    printf("Factorial of %d is : %lld",n,fac);

    return 0;
}