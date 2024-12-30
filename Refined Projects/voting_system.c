#include <stdio.h>
#include <string.h>
//#include<stdlib.h>
typedef struct vot_students
{

    char name[30];
    char sec;
    int num_per;

} stvt;
typedef struct rep_students
{
    char name[30];
    char sec;
    int class;
} strep;
// Following will take votes from students. and add it to representators.
int votes(stvt a, strep st);
// Follwing will take details of representators.
void rep_details(strep stu);
// Following will show details of representators.
void details(strep st);

int main()
{
    char rep;
    int vote;
    int a = 0;
    int num_stud = 0;
    int num_rep = 0;
    // int num_voting;
    printf("\n\t\t\tElection Of Student Council President\t\t\t\n\n");
    strep s[a];
    while (num_rep != 6)
    {
        rep_details(s[a]);
        num_rep += 1;
        printf("%d\n", num_rep);
        // a++;
        // fflush(stdin);
        // printf("Confirmation! For yes'y' or no'n': ");
        // scanf("%c",&rep);
    }
    printf("The represators are:\n");
    for (int i = 0; i < num_rep; i++)
    {
        printf("%d. ", i + 1);
        details(s[i]);
        printf("\n");
    }

    return 0;
}
void rep_details(strep stu)
{
    char connfirm;

    printf("Enter your name: ");
    scanf("%s", &stu.name);
    fflush(stdin);
    printf("Enter your section: ");
    scanf("%c", &stu.sec);
    fflush(stdin);
    printf("Enter your class: ");
    scanf("%d", &stu.class);
}
void details(strep st)
{
    printf("\t\t%s\t(%c)", st.name, st.sec);
}