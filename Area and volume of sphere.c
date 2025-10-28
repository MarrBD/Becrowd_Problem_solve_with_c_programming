#include<stdio.h>
int main()
{
    float r,pie=3.1416, V,A;
    printf("Enter the value of radius is: ");
    scanf("%f", &r);

    V=(4*pie*r*r*r)/3;
    A=(4*pie*r*r);

    printf("\n\nThe value of Volume of shpere is: %.2f\n", V);
    printf("The value of Area of shpere is: %.2f\n", A);

    return 0;
}
