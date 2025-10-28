#include<stdio.h>
int main()
{
    float a, b, c, y;
    scanf("%f %f %f", &a, &b, &c);

    if(((a+b)<=c) || ((b+c)<=a) || ((a+c)<=b))
    {
        y = 0.5 * (a+b) * c;
    printf("Area = %.1f\n", y);

    }
    else
    {
       y = a+b+c;
    printf("Perimetro = %.1f\n", y);
    }

        return 0;
    }
