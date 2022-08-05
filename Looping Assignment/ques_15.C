#include<stdio.h>

int main(){
    float s,sum=0.0;
    int n;

    printf("Enter the value of n\n");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        s=(float)i/(i+1);
        sum+=s;
    }

    printf("%f",sum);
}