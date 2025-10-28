#include<stdio.h>
int main()
{
    int y;
    printf("Enter your year value: ");
    scanf("%d", &y);

    if(((y % 4) == 0) || ((y % 400) == 0))

    {
        printf("%d is a leap year\n", y);
    }
    else
    {
        printf("%d is not a leap year\n\n\n\n\n", y);
    }

    return 0;
}

