#include <stdio.h>
int main()
{
    int N, Remainder;
    int notes100, notes50, notes20, notes10, notes5, notes2, notes1;

    scanf("%d", &N);
    printf("%d\n", N);

    notes100 = N/100;
    printf("%d nota(s) de R$ 100,00\n", notes100);

    Remainder = N % 100;
    notes50 = Remainder/50;
    printf("%d nota(s) de R$ 50,00\n", notes50);

    Remainder = Remainder % 50;
    notes20 = Remainder/20;
    printf("%d nota(s) de R$ 20,00\n", notes20);

    Remainder = Remainder % 20;
    notes10 = Remainder/10;
    printf("%d nota(s) de R$ 10,00\n", notes10);

    Remainder = Remainder % 10;
    notes5= Remainder/5;
    printf("%d nota(s) de R$ 5,00\n", notes5);

    Remainder = Remainder % 5;
    notes2 = Remainder/2;
    printf("%d nota(s) de R$ 2,00\n", notes2);

    Remainder = Remainder % 2;
    notes1 = Remainder/1;
    printf("%d 5 nota(s) de R$ 1,00\n", notes1);

    return 0;
}
