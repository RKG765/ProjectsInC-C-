#include<stdio.h>
float value(float num1,char s,float num2){
    float a = 0;
    if(s =='+'){
        a +=num1+num2;
        return a;
    }
    else if(s =='-'){
        a +=num1-num2;
        return a;
    }
    else if(s =='*'){

        a +=num1*num2;
        return a;
    }
    else if(s =='/'){
        a += num1/num2;
        return a;
    }
    // switch (s)
    // {
    // case /* constant-expression */:
    //     /* code */
    //     break;
    
    // default:
    //     break;
    // }

}

int main(){
    float num1;
    float num2;
    char sing;
    float val;
    printf("Enter tow numbers with sing: ");
    scanf("%.4f %s %.4f",&num1,&sing, & num2);

    val = value(num1,sing,num2);
    printf("%d",val);
    
    return 0;
}