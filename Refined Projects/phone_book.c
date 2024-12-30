#include<stdio.h>

#include<stdlib.h>

#include<string.h>
typedef struct phone_book
{
    char name[20];
    int number;
    char email[50];
}pb;
void contact(pb empl){
    FILE *ptr;
    ptr = fopen("contacts.txt","w");
    if (ptr ==NULL)
    {
        printf("Failed to create file.");
    }
    fprintf(ptr,"%s",empl.name);
    fprintf(ptr,"%d",empl.number);
    fprintf(ptr,"%s",empl.email);
}
void vewing(char s[80]){
    FILE *ptr;
    char c;
    ptr = fopen("contacts.txt",'w');
    c = fgetc(ptr);
    while (c!=EOF)
    {
        printf("%c",c);
        c = fgetc(ptr);
    }
}

int main(){
   int user;
   int val;
   char s[89];
   printf("Enter how many contacts you want to add: ");
   scanf("%d",&val);
   fflush(stdin);
   for (int i = 0; i < val; i++)
   {
        pb vale[i];
        contact(vale[i]);
        printf("Enter Name: ");
        // scanf("%s",&vale[i].name);
        strcpy(vale[i].name,scanf("%s"));
        printf("Number: ");
        scanf("%d",vale[i].number);
        printf("Email(Optional): ");
        strcpy(vale[i].email,scanf("%s"));
        contact(vale[i]);
   }

    
   printf("\t\tPress 1: For Veiwing contacts.\n");
//    printf("\t\tPress 2: For add new contact.\n");
   scanf("%d",&user); 
    if (user==2)
   {
       vewing(s);
       printf("%s",s);
   }
   return 0;
}