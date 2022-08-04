// WAP to calculate n^m

#include<stdio.h>

int main(){
    int pro=1;
    int n,m;

    printf("Enter the value of n and m\n");
    scanf("%d %d",&n,&m);
    
    for(int i=0;i<m;i++){
        pro=pro*n;
    }

    printf("%d",pro);
}