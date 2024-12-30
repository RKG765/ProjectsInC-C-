#include<stdio.h>

//#include<stdlib.h>

//#include<string.h>

int mypow(int base,int power){
    int a=0,product;
    while (a<=power)
    {
        power = base*a;
        a++;
        // product+=temp;
    }
    return product;
}

int main(){
    int num,power;
    printf("Enter Numer: ");
    scanf("%d",&num);
    printf("Enter Power: ");
    scanf("%d",&power);
    int res = mypow(num,power);
    printf("%d",res);
    return 0;
}