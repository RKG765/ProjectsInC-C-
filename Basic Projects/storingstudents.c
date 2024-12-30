#include <stdio.h>
#include <string.h>

typedef struct students
{
    char name[30];
    int roll;
    float marks;
} st;

typedef struct teacher
{
    char name[30];
    int id_no;
    char depart[30];
} tc;

typedef struct staf
{
    char name[30];
    int id_no;
} sf;

int main()
{
    int input;
    printf("\n\t\t\t\t Enter Your Choice: ");
    printf("\n\t\t\t\t 1: For Students");
    printf("\n\t\t\t\t 2: For Teachers");
    printf("\n\t\t\t\t 1: For Staffs");
    scanf("%d",&input);
    if (input == 1)
    {
        st a1;
        FILE *student_details;
        printf("Enter name: ");
        strcpy(a1.name, gets(a1.name));
        printf("Enter roll: ");
        scanf("%d", &a1.roll);
        printf("Enter marks: ");
        scanf("%.3f", &a1.marks);
        student_details = fopen("Students_Details.txt", "w+");
        fprintf(student_details, "%s\n%d\n%.4f", a1.name, a1.roll, a1.marks);
        fclose(student_details);
    }
    else if (input == 2)
    {
        tc b1;
        FILE *teacher_details;
        printf("Enter Name: ");
        strcpy(b1.name, gets(b1.name));
        printf("Identity No. : ");
        scanf("%d", &b1.id_no);
        printf("Enter Department: ");
        strcpy(b1.depart, gets(b1.depart));

        teacher_details = fopen("Teacher_Details.txt", "w+");
        fprintf(teacher_details, "%s\n%d\n%s", b1.name, b1.id_no, b1.depart);
        fclose(teacher_details);
    }
    else if (input == 3)
    {
        sf c1;
        FILE *staff_details;
        printf("Enter Name: ");
        strcpy(c1.name, gets(c1.name));
        printf("Enter Identity No. :");
        scanf("%d", &c1.id_no);

        staff_details = fopen("Staff_Details.txt", "w+");
        fprintf(staff_details, "%s\n%d", c1.name, c1.id_no);
        fclose(staff_details);
    }
    else
    {
        printf("\n\t\t\t\t Invalid Keyword!");
    }

    return 0;
}