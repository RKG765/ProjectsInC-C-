#include<stdio.h>
#include<string.h>
//#include<stdlib.h>
#include<math.h>

typedef struct busreserve
{
    char name[40];
    int age;
    int mobileNum;
}bus;


void book(bus *ptr);
void cancel();  
void details();

int main(){
    int num;
    printf("\n\t\t\t\t Welcome \t\t\t\t\n");
    printf("\n\t\t\t 1: Book Tickets \t\t\t\n");
    printf("\n\t\t\t 2: Veiw Tickets \t\t\t\n");
    printf("\n\t\t\t 3: Cancel Tickets \t\t\t\n");
    printf("\n\t\t\t Enter: ");
    scanf("%d",&num);
    bus cus1;
    bus *cus;
    cus = &cus1;
    fflush(stdin);
    if (num==1)
    {
        book(cus);
    }   
    else if (num==2)
    {
        cancel();
    }
    else if (num==3)
    {
        details();
    }
    else
    {
        printf("\n\t\t\t Invalid Number \t\t\t\n");
    }
    return 0;
}

void book(bus *ptr){
    printf("\n\t\t\t Name: ");
    strcpy(ptr->name,gets(ptr->name));
    printf("\n\t\t\t Age: ");
    scanf("%d",&ptr->age);
    printf("\n\t\t\t Mobile-Number: ");
        scanf("%d",&ptr->mobileNum);
    
    printf("\n\t\t\t Thanks For Booking \t\t\t\n");

}

void cancel(){

}

void details(){

}