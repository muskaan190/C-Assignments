#include<stdio.h>
main(){
    int n;
    printf("Enter any decimal number\n");
    scanf("%d",&n);
    int rem,reversed=0;
    int sum=0,a=1;
   int temp=n,rem2;
    while(n>0){
        rem=n%2;
        sum=rem*a+sum;
        a=a*10;
        n=n/2;
    }
    printf("%d\n",sum);
    
}