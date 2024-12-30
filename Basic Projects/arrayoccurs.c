#include<stdio.h>

//#include<stdlib.h>

//#include<string.h>
int occu(int num,int *arr[]){
    int _occurs = 0,total=0;
    while (total<31)
    {
        if (num==*arr[total])
        {
            _occurs+=1;
        }
        else
        {
            continue;
        }    
    }
    return _occurs;
}

int main(){
    int arr[]={13,14,3,12,32,12,31,31,341,341,415,3,4351,2,4122,124,124,124,124,241,24,1,2,4,1,2,4,244,1242,141,24};
    int *ptr[] = &arr[31];
    int inp;
    printf("Enter Number: ");
    scanf("%d",&inp);
    int func = occu(inp,*ptr);
    printf("%d",func);

    return 0;
}