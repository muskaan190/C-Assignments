// WAP to display the sum of first 10 positive integers.
#include<stdio.h>

int main(){
    int sum=0;

    for(int i=1;i<=10;i++){
        sum+=i;
    }
    printf("%d",sum);
}