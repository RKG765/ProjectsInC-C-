#include <stdio.h>

// #include <stdlib.h>

#include <string.h>
typedef struct customer
{
    char name[30];
    int age;
    int number;
    // char email[55];
} c;

void ticket_booking(int *num_sits, c *pointer)
{
    num_sits -= 1;
    // ptr1 = fopen("cusomer.txt","w");
    fflush(stdin);
    printf("\n\t\t Enter Your Name: ");
    strcpy(pointer->name, gets(pointer->name));

    printf("\n\t\t Enter Your Age: ");
    scanf("%d", &pointer->age);

    printf("\n\t\t Enter Your Number: ");
    scanf("%d", pointer->number);

    // printf("\n\t\t Enter Email: ");
    // strcpy(pointer->email,gets(pointer->email));

    // fprintf(ptr1,"%s",pointer->name);
    // fprintf(ptr1,"%d",pointer->age);
    // fprintf(ptr1,"%d",pointer->number);
    // fprintf(ptr1,"%s",pointer->email);
    // fclose(ptr1);
}
// void filing(FILE *file,c po){
//     file = fopen("con.txt","w");
//     fprintf(file,"%s",po.name);
//     fprintf(file,"%d",po.age);
//     fprintf(file,"%d",po.number);
//     fclose(file);
// }

int main()
{
    int user_option;
    int avaliable_sits = 200;
    int *ptr;
    ptr = &avaliable_sits;
    FILE *ptr2;
    ptr2 = fopen("cus.txt", "w");

    printf("\n\t\t\t 1: Booking \t\t\t\n");
    printf("\n\t\t\t 2: Cancel \t\t\t\n");
    printf("\n\t\t\t 3: Details \t\t\t\n");
    printf("Enter Your Option: ");
    scanf("%d", &user_option);
    if (user_option == 1)
    {
        c c1;
        c *ptr1;
        ptr1 = &c1;
        ticket_booking(ptr, ptr1);
        // filing(ptr2,c1);
        fprintf(ptr2, "%s", c1.name);
        fprintf(ptr2, "%d", c1.age);
        fprintf(ptr2, "%d", c1.number);
        fclose(ptr2);
    }
    else if (user_option == 2)
    {
        /* code */
    }
    else if (user_option == 3)
    {
        /* code */
    }
    else
    {
        printf("\n\t\t\tInvalid Input\t\t\t\n");
    }

    return 0;
}