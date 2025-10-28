#include<stdio.h>
int main()
{
    float C, F;
    printf("Enter the value of temperature in Farenhite: ");
    scanf("%f", &F);

    C = (5/9)*(F-32);

    printf("\n\nThe temperature value is converted from F into C: %f", C);

    return 0;
}
