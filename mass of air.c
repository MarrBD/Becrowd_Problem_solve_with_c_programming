#include<stdio.h>
int main()
{
    double V,P,m,T,PV,hor;
    printf("Enter the value of Temperature is: ");
    scanf("%lf", &T);

    PV=32*2;
    hor=(0.37*(T+460));
    m=PV/hor;

    printf("The value of mass of tire is: %lf pounds.\n", m);

    return 0;

}
