#include<stdio.h>
#include<string.h>
typedef struct phonebook
{
    char first_name[40];
    char mid_name[30];
    char last_name[30];
    int number;
}pb;

void add(pb con){
    
}
void del(pb con){

}
void see(pb con){

}

int main(){
    int user_in;
    printf("\n\n\t\t\t PhoneBook \t\t\t\n\n");
    printf("\n\t\t\t 1: Add Contact \t\t\t\n");
    printf("\n\t\t\t 2: Delete Contact \t\t\t\n");
    printf("\n\t\t\t 3: See Contact \t\t\t\n");
    printf("\n\t\t\t Option: ");
    scanf("%d",&user_in);
    pb con1;
    if (user_in==1)
    {
        add(con1);
    }
    else if(user_in==2){
        del(con1);
    }
    else if (user_in)
    {
        see(con1);
    }
    else{
        printf("\n\t\t\t Invalid Keyword \t\t\t\n");
    }
    return 0;
}