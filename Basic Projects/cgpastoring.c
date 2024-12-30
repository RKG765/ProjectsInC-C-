#include <stdio.h>

// #include<stdlib.h>

#include <string.h>

typedef struct student_cgpa
{
    char name[30];
    int year;
    float sub1, sub2, sub3, sub4, sub5;
} sc;

float funct_cgpa(sc s2)
{
    float reasult;
    reasult = (s2.sub1 + s2.sub2 + s2.sub3 + s2.sub4 + s2.sub5) / 5;
    return reasult;
}

int main()
{
    sc s1;
    float cgpa;
    FILE *student;
    printf("Enter Your Name: ");
    strcpy(s1.name, gets(s1.name));
    printf("Enter Semester: ");
    scanf("%d",&s1.year);
    printf("Enter Marks(in points): ");
    scanf("%f", &s1.sub1);
    printf("Enter Marks(in points): ");
    scanf("%f", &s1.sub2);
    printf("Enter Marks(in points): ");
    scanf("%f", &s1.sub3);
    printf("Enter Marks(in points): ");
    scanf("%f", &s1.sub4);
    printf("Enter Marks(in points): ");
    scanf("%f", &s1.sub5);

    printf("\n\t\t\t\t THANKS FOR VISTING!");

    cgpa = funct_cgpa(s1);
    student = fopen("Student_CGPA.txt", "w+");
    fprintf(student,"Name: %s\n Semester: %d \n Marks: \n \t\t\t\tENGLSIH: %.3f \n\t\t\t\t MATHS I:%.3f \n\t\t\t\tCOMPUTER SCI.: %.3f \n\t\t\t\t MATHS II: %.3f \n\t\t\t\tEnge. Drawing: %.3f \nCGPA: %.3f",&s1.name,s1.year, s1.sub1, s1.sub2, s1.sub3, s1.sub4, s1.sub5, cgpa);
    // fprintf("")
    fclose(student);
    return 0;
}