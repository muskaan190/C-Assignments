//WAP to find the HCF of has given two numbers.
//LOGIC 1:
/*
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter 2 numbers\n");
    scanf("%d %d",&a,&b);
    int min,i,HCF;
    if(a>b){
        min=b;
    }
    else{
        min=a;
    }
    for(i=1;i<min;i++){
        if((a%i==0)&&(b%i==0)){
            HCF=i;
        }
        
    }
    printf("HCF of %d and %d is %d",a,b,HCF);
}
*/

//LOGIC 2:

#include<stdio.h>
int main(){
    int x,y,m,n,a=1;
    printf("Enter two numbers\n");
    scanf("%d %d",&x,&y);
    if(x>y){
        n=x;
        m=y;
    }
    else{
        n=y;
        m=x;
    }
    while(a!=0){
        a=n%m;
        n=m;
        m=a;
    }

    printf("HCF of %d and %d is %d",x,y,n);

}