#include <stdio.h>
//#include<stdlib.h>
#include <string.h>
typedef struct bank_registration
{
    char branch[45];
    int branch_num;
    char name[30];
    char marry_status[20];
    char nationality[7];
    int pan; // 10-digits
    // ADDRESS
    int house_no;
    char house_name[50];
    char road[60];
    char village[30];
    char distric[45];
    char state[35];
    char country[25];
    int pin;
    int phone;
    char email[60];

} reg;
void acc_open(FILE *name, reg m1);

int main()
{
    FILE *ptr;
    char num[3];
    reg com1;
    printf("\n\t\t\t Welcome To MBI \t\t\t\n");
    printf("\n\t\t\t Acoount Opening Form \t\t\t\n");
    printf("\n\t\t\t Type: Saving \t\t\t\n");
    acc_open(ptr,com1);
    printf("\n\t\t\t Thanks For Chossing Us \t\t\t\n");
    // printf("\n\t\t\t 1: For Opeaning Account \t\t\t\n");
    // printf("\n\t\t\t 2: For Account Details \t\t\t\n");
    // printf("\n\t\t\t Enter: ");

    return 0;
};

void acc_open(FILE *ptr, reg m1)
{
    printf("\n\t\t\t Branch: ");
    strcpy(m1.branch, gets(m1.branch));

    printf("\n\t\t\t Branch No: ");
    scanf("%d", &m1.branch_num);
    while (1)
    {
        if (strlen(m1.branch_num) != 5)
        {
            printf("\n\t\t\t Wrong Input \t\t\t\n");
            scanf("%d", &m1.branch_num);
        }

        else if (strlen(m1.branch_num) == 5)
        {
            break;
        }
    }
    printf("\n\t\t\t Name: ");
    strcpy(m1.name, gets(m1.name));

    printf("\n\t\t\t Marraige Status: ");
    strcpy(m1.marry_status, gets(m1.marry_status));

    printf("\n\t\t\t Nationality: ");
    strcpy(m1.nationality, gets(m1.nationality));

    printf("\n\t\t\t Pan Number: ");
    scanf("%d", m1.pan);
    while (1)
    {
        if (strlen(m1.pan) != 10)
        {
            printf("\n\t\t\t Invalid Pan Number \t\t\t\n");
            scanf("%d", m1.pan);
        }
        else if (strlen(m1.pan) == 10)
        {
            break;
        }
    }
    printf("\n\t\t\t House No: ");
    scanf("%d", m1.house_no);

    printf("\n\t\t\t House Name: ");
    strcpy(m1.house_name, gets(m1.house_name));

    printf("\n\t\t\t Road/Lane: ");
    strcpy(m1.road, gets(m1.road));

    printf("\n\t\t\t Village: ");
    strcpy(m1.village, gets(m1.village));

    printf("\n\t\t\t Distric: ");
    strcpy(m1.distric, gets(m1.distric));

    printf("\n\t\t\t State: ");
    strcpy(m1.state, gets(m1.state));

    printf("\n\t\t\t Country: ");
    strcpy(m1.country, gets(m1.country));

    printf("\n\t\t\t Area Pin Code: ");
    scanf("%d", m1.pin);
    while (1)
    {
        if (strlen(m1.pin) != 4)
        {
            printf("\n\t\t\t Invalid Pan Number \t\t\t\n");
            scanf("%d", m1.pin);
        }
        else if (strlen(m1.pin) == 4)
        {
            break;
        }
    }

    printf("\n\t\t\t Mobile No: ");
    scanf("%d", m1.phone);
    while (1)
    {
        if (strlen(m1.phone) != 10)
        {
            printf("\n\t\t\t Invalid Mobile Number \t\t\t\n");
            scanf("%d", m1.phone);
        }
        else if (strlen(m1.phone) == 10)
        {
            break;
        }
    }
    printf("\n\t\t\t Email: ");
    strcpy(m1.email, gets(m1.email));

    ptr = fopen("bank_reg.txt", "w");
    fprintf(ptr, "\t\t\t Branch: %s \n\t\t\t Branch No: %d \n\t\t\t Account Holder Name: %s \n\t\t\t Marraige Status: %s \n\t\t\t Nationality: %s \n\t\t\t Pan Number: %d \n\t\t\t ADDRESS \n\t\t\t House Number: %d \n\t\t\t House Name: %s \n\t\t\t Road/Lane: %s \n\t\t\t Village: %s \n\t\t\t Distric: %s \n\t\t\t State: %s \n\t\t\t Country: %s \n\t\t\t Area Pin Code: %d \n\t\t\t Mobile No: %d \n\t\t\t Email: %s", m1.branch, m1.branch_num, m1.name, m1.marry_status, m1.nationality, m1.pan, m1.house_no, m1.house_name, m1.road, m1.village, m1.distric, m1.state, m1.country, m1.pin, m1.phone, m1.email);
    fclose(ptr);
}