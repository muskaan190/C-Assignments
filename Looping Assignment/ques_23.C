//WAP to check entered number is prime or not

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    int i,prime=0,count=0;
    for(i=2;i*i<=n;i++){
        if(n%i==0){
            prime=1;
        }
        count++;
    }

    if(prime==1){
        printf(" No It is not a prime number\n");
    }
    else{
        printf("Yes it is a prime number\n");
    }
}