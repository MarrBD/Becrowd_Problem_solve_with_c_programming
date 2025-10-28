#include<stdio.h>
int main()
{
    int i;
    double digit;

    scanf("%lf", &digit);

    for(i=0; i<100; i++){
        printf("N[%d] = %.4lf\n", i,digit);
        digit = digit/2.0;
    }
    return 0;
}
