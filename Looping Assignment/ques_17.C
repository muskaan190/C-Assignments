#include<stdio.h>

int main(){
    int sum1=0,sum2=0;
    int x,n;

    printf("Enter the value of x and n\n");
    scanf("%d %d",&x,&n);
    int temp=1;

    for(int i=1;i<n;i++){
        temp=temp*x;
        if(i%2!=0){
            sum1+=temp;
        }
        else{
            sum2+=temp;
        }
    }

    printf("%d",sum2-sum1+1);
}