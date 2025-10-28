#include <stdio.h>
int main()
{
    int notes100, notes50, notes20, notes10, notes5, notes2, Remainder;
    double N;
    int c100, c50, c25, c10, c05, c01;

    scanf("%lf", &N);
    N = N * 100;
    int integerN = N;
    printf("NOTAS:\n");

    notes100 = integerN/10000;
    printf("%d nota(s) de R$ 100,00\n", notes100);

    Remainder = integerN % 10000;
    notes50 = Remainder/5000;
    printf("%d nota(s) de R$ 50,00\n", notes50);

    Remainder = Remainder % 5000;
    notes20 = Remainder/2000;
    printf("%d nota(s) de R$ 20,00\n", notes20);

    Remainder = Remainder % 2000;
    notes10 = Remainder/1000;
    printf("%d nota(s) de R$ 10,00\n", notes10);

    Remainder = Remainder % 1000;
    notes5= Remainder/500;
    printf("%d nota(s) de R$ 5,00\n", notes5);

    Remainder = Remainder % 500;
    notes2 = Remainder/200;
    printf("%d nota(s) de R$ 2,00\n", notes2);





    printf("MOEDAS:\n");
    Remainder= Remainder % 200;
    c100 = Remainder/100;
    printf("%d moeda(s) de R$ 1.00\n", c100);

    Remainder= Remainder % 100;
    c50 = Remainder/50;
    printf("%d moeda(s) de R$ 0.50\n", c50);

    Remainder= Remainder % 50;
    c25 = Remainder/25;
    printf("%d moeda(s) de R$ 0.25\n", c25);

    Remainder= Remainder % 25;
    c10 = Remainder/10;
    printf("%d moeda(s) de R$ 0.10\n", c10);

    Remainder= Remainder % 10;
    c05= Remainder/05;
    printf("%d moeda(s) de R$ 0.05\n", c05);

    Remainder= Remainder % 05;
    c01= Remainder/1;
    printf("%d moeda(s) de R$ 0.01\n", c01);


    return 0;
}

