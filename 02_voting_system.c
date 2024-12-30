#include <stdio.h>
//#include<stdlib.h>
//#include<string.h>

int winner(int a, int b, int c, int d, int total)
{
    if (total > 0)
    {
        if (a > b && a > c && a > d)
        {
            return a;
        }
        else if (b > a && b > c && b > d)
        {
            return b;
        }
        else if (c > b && c > a && c > d)
        {
            return c;
        }
        else if (d > b && d > c && d > a)
        {
            return d;
        }
    }
}

int main()
{
    int user_num;
    int voters = 0;
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int num4 = 0;
    printf("\n\t\t\t\t Contestent are: \t\t\t\t\n");
    printf("\n\t\t\t 1: Rajendrea Kumar \t\t\t\n");
    printf("\n\t\t\t 2: Anil Kamla \t\t\t\n");
    printf("\n\t\t\t 3: Virendra Kamal \t\t\t\n");
    printf("\n\t\t\t 4: Raju Paswan \t\t\t\n");
    // printf("\n\t\t\t 5:  \t\t\t\n");
    while (1)
    {
        printf("\n\t\t\tEnter Vote: ");
        scanf("%d", &user_num);
        if (user_num >= 1 && user_num <= 4)
        {
            voters += 1;
            // printf("\n%d",voters);
        }
        fflush(stdin);
        if (user_num == 1)
        {
            num1 += 1;
            // printf("\n%d",num1);
        }
        else if (user_num == 2)
        {
            num2 += 1;
            // printf("\n%d",num2);
        }
        else if (user_num == 3)
        {
            num3 += 1;
            // printf("\n%d",num3);
        }
        else if (user_num == 4)
        {
            num4 += 1;
            // printf("\n%d",num4);
        }
        else if (user_num == 0 || user_num < 0)
        {
            break;
        }
        else
        {
            printf("\n\t\t Please Enter Valid Vote \t\t\n");
        }
    }
    // printf("\n\t\t Total number of votes: %d votes \t\t\n",voters);
    // printf("\n\t\t 1 gets: %d votes \t\t\n",num1);
    // printf("\n\t\t 2 gets: %d votes \t\t\n",num2);
    // printf("\n\t\t 3 gets: %d votes \t\t\n",num3);
    // printf("\n\t\t 4 gets: %d votes \t\t\n",num4);
    int win;
    win = winner(num1, num2, num3, num4, voters);
    printf("\n\t\t Total Number Of Votes: %d \t\t\n", voters);
    if (win == num1)
    {
        printf("\n\t\t The Winner Is Rajendrea Kumar \t\t\n");
        printf("\n\t\t Number Of Votes: %d \t\t\n", num1);
    }
    else if (win == num2)
    {
        printf("\n\t\t The Winner Is Anil Kamla \t\t\n");
        printf("\n\t\t Number Of Votes: %d \t\t\n", num1);
    }
    else if (win == num3)
    {
        printf("\n\t\t The Winner Is Virendra Kamal \t\t\n");
        printf("\n\t\t Number Of Votes: %d \t\t\n", num3);
    }
    else if (win == num4)
    {
        printf("\n\t\t The Winner Is Raju Paswan \t\t\n");
        printf("\n\t\t Number Of Votes: %d \t\t\n", num4);
    }
    return 0;
}