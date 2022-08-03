//WAP to accept any decimal number and convert into octal.
#include<stdio.h>
int main(){
    int n;
    printf("Enter any decimal number\n");
    scanf("%d",&n);
    int rem,a=1,sum=0;
    while(n>0){
        rem=n%8;
        sum=sum+rem*a;
        a=a*10;
        n=n/8;
    }
printf("The octal number is %d",sum);
}