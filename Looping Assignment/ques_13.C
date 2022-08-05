#include<stdio.h>

int main(){
    int n;
    int sum1=0,sum2=0;

    printf("Enter the value of n\n");
    scanf("%d",&n);

    for(int i=1;i<=n;i+=2){
        sum1+=i;
    }

    for(int i=2;i<=n;i+=2){
        sum2+=i;
    }

    printf("%d",sum1-sum2);
}