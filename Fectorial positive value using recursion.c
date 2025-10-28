#include<stdio.h>
int fac(int y)
{
    if (y==0 || y<0)
    return 1;

    else
        return y * fac(y-1);
}
int main ()
{
int a;
printf("Please input the positive value:");
scanf("%d", &a);
printf("The factorial value is: %d\n", fac(a));
return 0;
}


