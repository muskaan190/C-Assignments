#include<stdio.h>
#include<conio.h>

int main(){
    char ch;
    printf("Enter any character: ");
    scanf("%c",&ch);
    int x;
    x=ch;

    if(x>=65 && x<=91)
    printf("Uppercase");

    else if(x>=97 && x<=113)
    printf("Lowercase");

    else if(x>=48 && x<=57)
    printf("numeric data");
}