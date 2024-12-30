#include<stdio.h>

int add(int a,int b);

int main(){
    int num1,num2,c;
    printf("Enter number: ");
    scanf("%d",&num1);
    printf("Enter the number: ");
    scanf("%d",&num2);
    c= add(num1,num2);
    printf("%d",c);
    return 0;
}

int add(int a, int b){
    int c = a+b;
    return c;
}