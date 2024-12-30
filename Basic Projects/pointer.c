#include<stdio.h>

//#include<stdlib.h>

//#include<string.h>
// int great(int num1,int num2){



// } 

int main(){
    int num1,num2;
    int *ptr1,*ptr2;
    printf("Enter number: ");
    scanf("%d",&num1);
    printf("Enter numer: ");
    scanf("%d",&num2);
    ptr1=&num1;
    ptr2=&num2;
    if (*ptr1>*ptr2)
    {
    printf("%u",*ptr1);
    }
    else{
        printf("%u",*ptr2);
    }
    
    return 0;
}