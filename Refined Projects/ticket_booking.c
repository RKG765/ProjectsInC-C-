#include<stdio.h>
//#include<stdlib.h>
#include<string.h>
struct ticket_booking{
    char name[30];
    int ticket_number;

};
void booktickets(int *sh);
void canceltickets(int *sh);
void  veiwtickets(int *sh);
int ticketprize(int a);


int main(){
    int user;
    int sheets=80;
    int *ptr;
    ptr = &sheets;
    printf("\n\t\t\t Welcome To Cinopelsoi \t\t\t\n");
    printf("\n\t\t\t 1: Book Tickets \t\t\t\n");
    printf("\n\t\t\t 2: Cancel Tickets \t\t\t\n");
    printf("\n\t\t\t 3: View Tickets \t\t\t\n");
    printf("\n\t\t\t 4: Quit \t\t\t\n");
    scanf("%d",&user);
    if (user==1)
    {
        booktickets(ptr);
    }
    else if (user==2)
    {
        canceltickets(ptr);
    }
    else if (user==2)
    {
        veiwtickets(ptr);
    }
    else if(user==4)
    {
        printf("\n\t\t(_______)\t\t\n");
    }
    else
    {
        printf("\n\t\tEnter A Valid Key\t\t\n");
    }
    return 0;
}
void booktickets(int *sh){
    int a;
    int ticketnum=0;
    printf("\n\t\t\t Avaliable Tickets: %d \t\t\t\n",*sh);
    printf("How many tickets: ");
    scanf("%d",&a);
    typedef struct ticket_booking
    {
        char name[30];
        char ticket_number;
    }tb;
    if (a==0)
    {
        printf("\n\t\t\tPlease Enter A Valid Option\t\t\t\n");
    }
    else if(a>0 || a<8){
        for (int i = 0; i < a; i++)
        {
            sh-=1;
            tb cus[i];
            printf("Enter your name: ");
            gets(cus[i].name);
            strcpy(cus[i].name,gets(cus[i].name));
            fflush(stdin);
            ticketnum+=1;
            printf("Your Ticket Number: %d",ticketnum);
            strcpy(cus[i].ticket_number,ticketnum);
        }
    }
    else
    {
        printf("\n\t\t\tInvalid Option\t\t\t\n");
    }
    
    printf("\n\t\t\tPaymet: %d\t\t\t\n",ticketprize(a));
}
void canceltickets(int *sh){
    printf("Numbers of tickets is %d\n",*sh);
}
void  veiwtickets(int *sh){
    printf("Numbers of tickets is %d\n",*sh);
}   
int ticketprize(int a){
    int prize=200;
    int pay;
    printf("\n\t\t\t Ticket prize: %d \t\t\t\n",prize);
    pay = prize*a;
    return pay;
}
