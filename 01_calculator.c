#include <stdio.h>
//#include<stdlib.h>
//#include<string.h>

void calculate(int num1, char si, int num2);

int main()
{
    int a;
    // char *ptr;
    char s;
    // ptr = &s;
    int b;
    printf("Enter the number: ");
    scanf("%d%c%d", &a, &s, &b);
    // printf("\n\t\t\t %d %c %d \t\t\t\n",a,s,b);
    calculate(a, s, b);
    return 0;
}
void calculate(int num1, char si, int num2)
{
    {
        if (si == '+')
        {
            printf("\n\t\t %d %c %d = %d \t\t\n", num1, si, num2, num1 + num2);
        }
        else if (si == '-')
        {
            printf("\n\t\t %d %c %d = %d \t\t\n", num1, si, num2, num1 - num2);
        }
        else if (si == '*')
        {
            printf("\n\t\t %d %c %d = %d \t\t\n", num1, si, num2, num1 * num2);
        }
        else if (si == '/')
        {
            printf("\n\t\t %d %c %d = %.4f \t\t\n",num1, si,num2, (float)(num1 / num2));
        }
        else if (si == '%')
        {
            printf("\n\t\t %d %c %d = %.4f \t\t\n",num1, si,num2, (float)(num1 % num2));
        }
        else
        {
            printf("\n\t\t Invalid Sing \t\t\n");
        }
    }
}