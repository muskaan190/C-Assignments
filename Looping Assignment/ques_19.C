#include<stdio.h>

int fact(int n){
    if(n==1 || n==0)
        return 1;
    else
        return n*fact(n-1);
}

int main(){
    float sum=0.0;
    float f;
    int x,n;

    printf("Enter the value of x and n\n");
    scanf("%d %d",&x,&n);
    int temp=1;

    for(int i=1;i<n;i++){
        temp=temp*x;
        f=(float)temp/fact(i);
        sum+=f;
    }

    printf("%f",sum+1);
}