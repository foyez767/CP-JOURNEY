#include<stdio.h>

int gcd(int a,int b){
    if(a != b){
        if(a>b)
            return gcd(a-b,b);
        else
            return gcd(a,b-a);

    }else 
        return a;

}

int main(){
    int a=0,b=0;
    scanf("%d %d",&a,&b);
    int result=gcd(a,b);
    printf("GCD of %d and %d is : %d",a,b,result);

    return 0;
}