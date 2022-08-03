//WAP to accept any octal number and convert into decimal.
#include<stdio.h>
int main(){
    int n;
    printf("Enter any octal number\n");
    scanf("%d",&n);
    int sum=0,rem,a=1;
    while(n>0){
        rem=n%10;
        sum=sum+rem*a;
        a=a*8;
        n=n/10;
    }
    printf("The decimal number is %d",sum);
}