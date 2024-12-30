#include<stdio.h>

//#include<stdlib.h>

//#include<string.h>

int main(){
    int n=10,arr[n],pos,inp;
    for (int i = 0; i <n ; i++)
    {
        arr[i]= i+2;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d,",arr[i]);
    }
    
    
    // printf("Enter Position: ");
    // scanf("%d",&pos);
    printf("Enter Number: ");
    scanf("%d",&inp);
    n++;
    arr[n] = inp;
    for (int i = 0; i < n; i++)
    {
        printf("%d,",arr[i]);
    }
    
    
    
    return 0;
}