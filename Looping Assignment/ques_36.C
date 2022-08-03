//WAP to accept any binary number and convert into decimal.
#include<stdio.h>
int main(){
    int n;
    printf("Enter any binary number\n");
    scanf("%d",&n);
    int rem,a=1,sum=0;
    while(n>0){
        rem=n%10;
        sum=sum+rem*a;
        a=a*2;
        n=n/10;
    }
    printf("%d",sum);
}