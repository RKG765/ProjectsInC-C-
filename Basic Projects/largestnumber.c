#include <stdio.h>

// #include<stdlib.h>

// #include<string.h>
float largest(float arr[])
{
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            if (arr[i] > arr[i + 2])
            {
                if (arr[i] > arr[i + 3])
                {
                    if (arr[i] > arr[i + 4])
                    {
                        if (arr[i] > arr[i + 5])
                        {
                            printf("%f", arr[i]);
                        }
                    }
                }
            }
        }
    }
}

int main()
{
    float arr[6];
    for (int i = 0; i < 6; i++)
    {
        printf("Enter Number: ");
        scanf("%f", &arr[i]);
    }
    largest(arr);

    return 0;
}