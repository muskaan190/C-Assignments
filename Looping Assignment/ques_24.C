//WAP to display the N elements of Fibonacci series.

#include<stdio.h>
int main(){
    int n;
    printf("Enter the no. of elements you want to display\n");
    scanf("%d",&n);
    int a=1,b=1,c=0;
    printf("%d  ",a);
    printf("%d  ",b);
    for(int i=2;i<n;i++){
        c=a+b;
        a=b;
        b=c;
        printf("%d  ",c);
    }
    
}