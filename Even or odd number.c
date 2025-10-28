#include<stdio.h>
int main ()
{
    int n;
    printf("\n please Enter an integer number: ");
    scanf("%d", &n);
    if((n % 2) != 0)
    {
        printf("\n \a You entered an odd number");
    }
    else

        printf("\n \a You entered an Even number");


    return 0;
}
