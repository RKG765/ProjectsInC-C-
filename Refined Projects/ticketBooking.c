#include <stdio.h>
#include <string.h>
typedef struct ticketBooking
{
    char name[30];
    char destination[30];
    char location[30];
    int num;
} ticket;

int ticketsbooked(int *ptr,ticket t1);
int main()
{
    int tickets=40;
    int *p;
    *p=&tickets;
    int num;
    printf("\n\t\t\t\t Welcome To Our Bus Tour \t\t\t\t\n");
    printf("\n\t\t\t\t 1: Book Tickets \t\t\t\t\n");
    printf("\n\t\t\t\t 2: Details \t\t\t\t\n");
    printf("\n\t\t\t\t 3: Exit \t\t\t\t\n");
    while (1)
    {
    }

    return 0;
}
int ticketsbooked(int *ptr,ticket t1){
    int seats = *ptr;
    int set = 1;
    FILE *ptr;
    ptr = fopen("details.txt",'a+');
    fprintf(ptr,"Name: %s \n Seat No: %d",t1.name,set+1);
}