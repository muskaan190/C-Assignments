//WAP to find the LCM of  given two numbers.
#include<stdio.h>
int main(){
    int x,y,m,n,a=1,lcm;
    printf("Enter 2 numbers\n");
    scanf("%d %d",&x,&y);
    if(x>y){
        n=x;
        m=y;
    }
    else{
        m=y;
        n=x;
    }
    while(a!=0){
        a=n%m;
        n=m;
        m=a;
    }

    lcm=(x*y)/n;
    printf("The LCM of %d and %d is %d",x,y,lcm);
}