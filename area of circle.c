#include<stdio.h>
int main ()

{
    double n=3.14159,r,A;
    printf("Enter the radious value:");
    scanf("%lf", &r);
    A=n*r*r;
    printf("Area of the Circle is:%lf\n",A);
    return 0;
}
