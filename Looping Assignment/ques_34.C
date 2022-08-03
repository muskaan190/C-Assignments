#include<stdio.h>
int main(){
    int n;
    int m,original,reversed=0;
    printf("Enter any  number\n");
    scanf("%d",&n);
    original=n;
    while(n>0){
        m=n%10;
        reversed=reversed*10+m;
        n=n/10;
    }

    if(original==reversed){
        printf("Yes it is a palindrome number\n");
    }
    else{
        printf("No it is not a palindrome");
    }


}