#include<stdio.h>

//#include<stdlib.h>

#include<string.h>
char alpha(char *ar[]){
    int arr[26];
    for (int i = 65; i <= 90; i++)
    {
        int j=0;
        scanf("%d",&arr[j]);
        j++;
    }
    // for (int i = 0; i < 26; i++)
    // {
    //     scanf("%c",&)
    // }
    
    
}

int main(){
    int array[26];
    int num_alpha=65;
    for (int i = 0; i <26; i++)
    {
        if (num_alpha>=90)
        {
            // scanf("%d",&array[i]={num_alpha});
            num_alpha++;
        }
        else
        {
            break;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%d ",array[i]);
    }
    
    
    return 0;
}