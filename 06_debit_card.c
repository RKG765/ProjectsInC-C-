#include<stdio.h>
#include<string.h>

float add(float *ptr){
    float add1;
    *ptr = 0;
    float *ptr2;
    ptr2 = &add1;
    printf("\n\t\t\t Enter Amount: ");
    scanf("%f",&add1);

    *ptr = *ptr+*ptr2;
    printf("\n\t\t\t Balance: %.5f",*ptr);
    return 0;
}
float withdraw(float *ptr){
    float with;
    *ptr = 0;
    float *ptr3;
    ptr3 = &with;
    printf("\n\t\t\t Enter Amount: ");
    scanf("%f",&with);
    if (ptr<ptr3)
    {
        printf("\n\t\t\t Insufficient Amount \t\t\t\n");
    }
    else{
        *ptr = *ptr-*ptr3;
        printf("\n\t\t\t Balnce: %.5f",*ptr);
    }
    return 0;
    
}

int main(){
    int userChoice;
    float money;
    float *ptr;
    ptr = &money;
    printf("\n\t\t\t Welcome To ATM \t\t\t\n");
    printf("\n\t\t\t 1 Deposit Money \t\t\t\n");
    printf("\n\t\t\t 2 Withdraw Money \t\t\t\n");
    printf("\n\t\t\t 3 Check Balance \t\t\t\n");
    
    scanf("%d",&userChoice);
    if (userChoice==1)
    {
        add(ptr);
        // printf("\n\t\t\t Balance: %.5f",*ptr);    
    }
    else if(userChoice==2){
        withdraw(ptr);
    }
    else if(userChoice==3){
        printf("\n\t\t\t Your Balance: %.5f\t\t\t\n",money);
    }
    else{
        printf("\n\t\t\t Invalid Keyword \t\t\t\n");
    }
    

    return 0;
}