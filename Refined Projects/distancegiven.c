#include<stdio.h>
#include<math.h>

int main(){
    double x,y,z,s;

    printf("Enter the number: ");
    scanf("%lf%lf%lf%lf",&x,&y,&z,&s);
    printf("\nDistance between given point is: ",sqrt(pow(x-z,2)+pow(y-s,2)));


    return 0;
}