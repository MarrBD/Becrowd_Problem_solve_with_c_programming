#include<stdio.h>

int main()
{
    int factorial=1,n,i;
    scanf("%d", &n);

    for(i=n; i>=1; i--){
        factorial = factorial*i;
    }
    printf("%d\n", factorial);

    return 0;
}
