#include<stdio.h>

//#include<stdlib.h>

//#include<string.h>

void temp(float num){
    if (num>=18)
    {
        printf("It's Hot.");
    }
    else if (num<18)
    {
        printf("It's Cold.");
    }    
}

int main(){
    float tem;
    printf("Enter Temperature(in degree C): ");
    scanf("%f",&tem);
    temp(tem);
    return 0;
}