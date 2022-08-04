// WAP to calculate the factorial of any number using function.
#include<stdio.h>

int fact(long double n){
    if(n==1)
        return n;
    
    else
        return (n)*fact(n-1);
}

int main(){
    long  double n;
    long  double ans;
    printf("Enter the number\n");
    scanf("%Lf",&n);
    ans=fact(n);

    printf("%Lf",ans);
}