#include<stdio.h>

int main(){
    int sum=0;
    int x,n;

    printf("Enter the value of x and n\n");
    scanf("%d %d",&x,&n);
    int temp=1;

    for(int i=1;i<n;i++){
        temp=temp*x;
        sum+=temp;
    }

    printf("%d",sum+1);
}