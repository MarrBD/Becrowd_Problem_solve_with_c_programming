#include<stdio.h>
#include<conio.h>
int main()
{
    float i,p,r,n,F;  //n= number of year, r= interest of rate,   p=principal;
    printf("Enter the value of Total principal: ");
    scanf("%f", &p);
    printf("Enter the value of interest of rate: ");
    scanf("%f", &r);
    printf("Enter the value of Total number of year: ");
    scanf("%f", &n);

    i = r/100;
    F = p*pow((1+i), n);
    printf("\n\n\n\n The value of F is: %f\n\n\n\n\n", F);


    return 0;
}
