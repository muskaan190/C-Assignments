//WAP to accept any decimal number and convert into hexadecimal
#include<stdio.h>
int main(){
    char hexa[100];
    int n,temp,i=0;
    printf("Enter a decimal number\n");
    scanf("%d",&n);
    while(n!=0){
        temp=n%16;
        if(temp<10){
            hexa[i]=temp+48;
            i++;
        }
        else{
            hexa[i]=temp+55;
            i++;
        }
        n=n/16;
    }
    int j;
    for(j=i-1;j>=0;j--){
        printf("%c",hexa[j]);
    }
}