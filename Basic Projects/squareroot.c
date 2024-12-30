#include<stdio.h>
#include<math.h>
//#include<stdlib.h>

//#include<string.h>

float root(int num){
    return sqrt(num);
}

int main(){
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    float res=root(num);
    printf("%.4f",res);
    return 0;
}