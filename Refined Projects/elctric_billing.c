#include<stdio.h>
//#include<stdlib.h>
#include<string.h>
typedef struct custumer{

    char name[40];
    int bill_number;
    char bill_period[10];
    int mob_num;
    char address[150];
}cu;
void elec_rate(float a);
void get_details(cu c1);
void file_back(FILE *ptr,cu s1);

int main(){
    float a=0;
    cu c1;
    FILE *ptr;
    printf("\n\t\t Electricity Bill\t\t\n");
    get_details(c1);
    printf("\n\t\tMeter Reading\t\t\n");
    printf("Enter this %s month usage: ",c1.bill_period);
    scanf("%fKwh",&a);
    elec_rate(a);
    return 0;
}

void get_details(cu c1){
    
    printf("Enter your name: ");
    strcpy(c1.name,gets(c1.name));
    printf("Enter Your bill number: ");
    scanf("%d",&c1.bill_number);
    // printf("%s",c1.name);
    printf("Enter billing period month: ");
    strcpy(c1.bill_period,gets(c1.bill_period));
    printf("Enter your mobile number: ");
    scanf("%d",&c1.mob_num);
    printf("Enter your address: ");
    strcpy(c1.address,gets(c1.address));
}
void file_back(FILE *ptr,cu s1){
    ptr = fopen("custumers.txt","w");
    fprintf(ptr,"%s\n%d\n%s\n%d\n%s",s1.name,s1.bill_number,s1.bill_period,s1.mob_num,s1.address);

}
void elec_rate(float a){
    float rate = 9.76;
    printf("\n\t\tTotal Usage:%f Total Amount is:%f\t\t\n",a,a*rate);
}



    