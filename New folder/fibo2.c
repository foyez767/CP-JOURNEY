#include<stdio.h>

int fibo(int i){
    if(i<=1)
        return i;
    else
        return fibo(i-1)+fibo(i-2);


}
int main(){
    int n=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("%d  ",fibo(i));
    }

    return 0;
}