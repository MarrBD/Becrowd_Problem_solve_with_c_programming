#include <stdio.h>
int main()
{
    double R;
    double pi=3.14159;

    scanf("%lf", &R);
    double Volume = (4.0/3) * pi * R * R * R;

    printf("VOLUME = %.3lf\n", Volume);

    return 0;
}
