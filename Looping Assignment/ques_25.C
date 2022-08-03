//WAP to display and count the all prime numbers between 1 to n.

#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    int i,j,prime=0;
    for(j=1;j<n;j++){
        for(i=2;i*i<=j;i++){
        if(j%i==0){
            prime=1;
        }
        }
        if(prime==0){
            printf("%d ",i);
        }
    }
}