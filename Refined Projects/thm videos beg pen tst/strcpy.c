#include<stdio.h>
#include<string.h>
void strcopy(char *co,char *so){
    int len = strlen(so);
    for (int i = 0; i<len; i++)
    {
        co[i] = so[i];
    }
    
    
}

int main(){
    char source[30]="Hi how are you";
    char copy[45] ="hii";
    strcopy(copy,source);
    printf("The value of copy is\n%s",copy);
    return 0;
}