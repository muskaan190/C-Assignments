#include<stdio.h>

int main(){
    float sum=0.0;
    float f;
    int x,n;

    printf("Enter the value of x and n\n");
    scanf("%d %d",&x,&n);
    int temp=1;

    for(int i=1;i<n;i++){
        temp=temp*x;
        f=(float)temp/i;
        sum+=f;
    }

    printf("%f",sum+1);
}