#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>

void temp(int a);
void currency(int a);
void mass(int a);

int main(){
    int inp;
    int *ptr;
    printf("\n1.Temperature\n2.Currecy\n3.Mass\n4.Close\nEnter: ");
    scanf("%d",&inp);
    if (inp==1)
    {
        temp(inp);
    }
    else if (inp==2)
    {
        currency(inp);
    }
    else if (inp==3)
    {
        mass(inp);
    }
    else if (inp==4)
    {
        printf("\t\tThanks for running the program.\t\t");
    }
    else
    {
        printf("Please enter a valid option.");
    }
    return 0;
}
void temp(int a){
    float num;
    int degree;
    printf("for *c to *f:1\n*f to *c:2 \n*c to k:3 \n*f to k:4 \nk to *c:5 \nk to *f:6\nInput: ");
    scanf("%d",&degree);
    fflush(stdin);
    if (degree==1)
    {
        printf("Enter the number: ");
        scanf("%f",&num);
        printf("%f*c into *f is:%.3f\n",num,(num*1.8)+32);
    }
    else if (degree==2)
    {
        printf("Enter the number: ");
        scanf("%f",&num);
        printf("%f*f into *c is:%.3f\n",num,(num-32)*(.5556));
    }
    else if (degree==3)
    {
        printf("Enter the number: ");
        scanf("%f",&num);
        printf("%f*c into k is:%.3f\n",num,(num+273.15));
    }
    else if (degree==4)
    {
        printf("Enter the number: ");
        scanf("%f",&num);
        printf("%f*f into k is:%.3f\n",num,(num-32)*(.5556)+273.15);
    }
    else if (degree==5)
    {
        printf("Enter the number: ");
        scanf("%f",&num);
        printf("%fk into *c is:%.3f\n",num,num-273.15);
    }
    else if (degree==6)
    {
        printf("Enter the number: ");
        scanf("%f",&num);
        printf("%fk into *f is:%.3f\n",num,(num-273.15)*(1.8)+32);
    }
    else
    {
        printf("Please enter a valid option.\n");
    };

}

void currency(int a){
    int sing;
    float money;
    printf("1:INR to USD\n2:USD to INR\n3:INR to PakitaniRupee\n4:PRs to INR\nEnter: ");
    scanf("%d",&sing);
    fflush(stdin);
    if (sing==1)
    {
        printf("Enter amountin RS: ");
        scanf("%f",&money);
        printf("$ %.4f\n",money/77.87);
    }
    else if (sing==2)
    {
        printf("Enter amountin $: ");
        scanf("%f",&money);
        printf("RS %.4f\n",money*77.87);
    }
    else if (sing==3)
    {
        printf("Enter amountin RS: ");
        scanf("%f",&money);
        printf("PRS %.4f\n",money*2.57);
    }else if (sing==4)
    {
        printf("Enter amountin PRS: ");
        scanf("%f",&money);
        printf("RS %.4f\n",money/2.57);
    }
    // You can add more.
    // else if (sing==5)
    // {
        
    // }
    else
    {
        printf("Please enter a valid option.\n");
    }
}

void mass(int a){
    int opt;
    float mass;
    int cons=1000;
    printf("1:mg to g\n2:g to kg\n3:kg to tonne\n4:tonne to kg\n5: kg to g\n6:g to mg\nEnter: ");
    scanf("%d",&opt);
    fflush(stdin);
    if (opt==1)
    {
        printf("Enter: ");
        scanf("%fmg",&mass);
        printf("%.5fgm\n",mass/cons);
    }
    else if (opt==2)
    {
        printf("Enter: ");
        scanf("%fgm",&mass);
        printf("%.5fkg\n",mass/cons);
    }
    else if (opt==3)
    {
        printf("Enter: ");
        scanf("%fkg",&mass);
        printf("%.5ftonne\n",mass/cons);
    }
    else if (opt==4)
    {
        printf("Enter: ");
        scanf("%ftonne",&mass);
        printf("%.5fkg\n",mass*cons);
    }
    else if (opt==5)
    {
        printf("Enter: ");
        scanf("%fkg",&mass);
        printf("%.5fgm\n",mass*cons);
    }
    else if (opt==6)
    {
        printf("Enter: ");
        scanf("%fgm",&mass);
        printf("%.5fmg\n",mass*cons);
    }
    else{
        printf("Invalid Keyword\n");
    }

}  

    
    