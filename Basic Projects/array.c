// Write a program in c to print an array of character in reverse order.

#include<stdio.h>

//#include<stdlib.h>

//#include<string.h>

int main(){
    int arr[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int a = 11;
    // for (int i = 12; i >= 0; i--)
    // {
    //     printf("%d",arr[i]);
    // }
    while (a!=-1)
    {
        printf("%d,",arr[a]);
        a--;
    }
    
    return 0;
}