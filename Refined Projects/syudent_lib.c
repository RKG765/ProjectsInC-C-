#include <stdio.h>
#include <stdlib.h>
typedef struct students
{
    char name[35];
    int roll;
    char sub[20];
} stud;

int main()
{
    int num_stud;
    FILE *ptr;
    printf("Enter Number of students: ");
    scanf("%d", &num_stud);

    ptr = fopen("Students_Info.txt", "w");
    fflush(stdin);
    stud s[num_stud];
    for (int i = 0; i < num_stud; i++)
    {
        printf("Enter Full Name of student %d: ", i + 1);
        gets(s[i].name);
        fflush(stdin);

        printf("Enter Roll: ");
        scanf("%d", &s[i].roll);
        fflush(stdin);

        printf("Enter Subject of student %d: ", i + 1);
        gets(s[i].sub);
    }
    for (int i = 0; i < num_stud; i++)
    {
        fprintf(ptr, "Name: %s\nRollno: %d\nSubject: %s\n", s[i].name, s[i].roll, s[i].sub);
    }

    fclose(ptr);
    return 0;
}