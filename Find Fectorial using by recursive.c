#include<stdio.h>
long int find_fectorial(long int n)
{
    if(n<=1)
        return 1;
    else
        return (n * find_fectorial(n-1));
}
int main ()
{
    long int x;
    int n;
    scanf("%ld", &n);

    x = find_fectorial(n);
    printf("\nFectorial result is : %ld", x);
    return 0;
}
