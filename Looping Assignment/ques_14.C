#include<stdio.h>

int main(){
    float sum=0.0;
    float s;
    int n;

    printf("Enter the value of n\n");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        s=(float)1/i;
        sum+=s;

    }

    printf("%lf",sum);
}