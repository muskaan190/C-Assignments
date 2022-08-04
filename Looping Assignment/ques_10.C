// WAP to accept 10 numbers from user and find the maximum and minimum.

#include<stdio.h>
#include<limits.h>

int main(){
    int max=INT_MIN;
    int min=INT_MAX;
    int n;

    printf("Enter 10 numbers\n");

    for(int i=0;i<10;i++){
        scanf("%d",&n);

        if(n<min)
        min=n;

        if(n>max)
        max=n;
    }

    printf("The maximum number is %d\n",max);
    printf("The minimum number is %d",min);
}