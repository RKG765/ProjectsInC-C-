#include <stdio.h>

// #include<stdlib.h>

#include <string.h>
typedef struct registration
{
    char name[40];
    int age;
    double mobile_number;
    char cast[8];
    char village[40];
    char post[40];
    char city[40];
    char state[40];
    int pin_code;
} newReg;
void details(newReg p1, FILE *ptr, int in);
void details_check(int num, FILE *rea, int reg_num[]);

int main()
{
    int user_input = 0;
    int a;
    int reg[20];
    printf("\n\t\t\t Welcome To Card Registration \t\t\t\n");
    printf("\n\t\t\t 1: For New Registration \t\t\t\n");
    printf("\n\t\t\t 2: For Details \t\t\t\n");
    printf("\n\t\t\t Enter: ");
    scanf("%d", &a);
    newReg p1;
    FILE *ptr;
    int num;
    fflush(stdin);
    if (a == 1)
    {
        user_input += 1;
        for (int i = 0; i < a; i++)
        {
            reg[i] = user_input;
        }

        printf("%d", user_input);
        details(p1, ptr, user_input);
    }
    else if (a == 2)
    {
        printf("\n\t\t Please Enter The Regitration Number: ");
        scanf("%d", &num);
        details_check(num, ptr, reg[20]);
    }
    else
    {
        printf("\n\t\t\t Invalid Keyword\t\t\t\n");
    }

    return 0;
}
void details(newReg p1, FILE *ptr, int in)
{
    printf("\n\t\t Enter Your Name: ");
    strcpy(p1.name, gets(p1.name));
    fflush(stdin);
    printf("\n\t\t Enter Your Age: ");
    scanf("%d", &p1.age);
    fflush(stdin);

    printf("\n\t\t Enter Your MobileNo: ");
    scanf("%d", &p1.mobile_number);
    fflush(stdin);

    printf("\n\t\t Enter Your Cast: ");
    printf("\n\t\t\t General \t\t\t\n");
    printf("\n\t\t\t OBC/EBC \t\t\t\n");
    printf("\n\t\t\t SC/ST \t\t\t\n");
    strcpy(p1.cast, gets(p1.cast));
    fflush(stdin);

    printf("\n\t\t\t Address \t\t\t\n");
    printf("\n\t\t Enter Your Village: ");
    strcpy(p1.village, gets(p1.village));
    fflush(stdin);

    printf("\n\t\t Enter Your Post: ");
    strcpy(p1.post, gets(p1.post));
    fflush(stdin);

    printf("\n\t\t Enter Your City: ");
    strcpy(p1.city, gets(p1.city));
    fflush(stdin);

    printf("\n\t\t Enter Your State: ");
    strcpy(p1.state, gets(p1.state));
    fflush(stdin);

    printf("\n\t\t Enter Your Area Pin-code: ");
    scanf("%d", &p1.pin_code);

    ptr = fopen("cardDetails.txt", "a");
    if (ptr == NULL)
    {
        printf("File Was not created\n");
    }
    fprintf(ptr, "\n\t\t\t Details \t\t\t\n\t\tRegistrationNo: %d Name: %s\n\t\t Age: %d\n\t\t MobileNo: %d\n\t\t Cast: %s\n\t\t Village: %s\n\t\t Post: %s\n\t\t City: %s\n\t\t State: %s\n\t\t Pin-Code: %d", in, p1.name, p1.age, p1.mobile_number, p1.cast, p1.village, p1.post, p1.city, p1.state, p1.pin_code);
}

void details_check(int num, FILE *rea, int reg_num[])
{
    for (int i = 0; i < 20; i++)
    {
        if (reg_num[i] == num)
        {
            rea = fopen("card_details.txt", "r");
            char r;
            r = fgetc(rea);
            while (rea != EOF)
            {
                printf("\n\t\t\t %c \t\t\t\n", r);
                r = fgetc(rea);
            }
        }
        else
        {
            printf("\n\t\t\t Invalid Input \t\t\t\n");
        }
    }
}