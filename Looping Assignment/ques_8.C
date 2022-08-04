// WAP to display the sum of all even numbers between 1 to 100.

#include<stdio.h>

int main(){
    int sum=0;

    for(int i=2;i<=100;i+=2){
        sum+=i;
    }

    printf("%d",sum);
}