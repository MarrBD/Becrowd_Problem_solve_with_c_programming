#include<stdio.h>
int main ()
{
    int Ndays, Days, Months,Years, Remainder;
    scanf("%d", &Ndays);

    Years = Ndays/365;
    Remainder = Ndays % 365;
    Months = Remainder/30;
    Remainder = Remainder % 30;
    Days = Remainder;

    printf("%d ano(s)\n", Years);
    printf("%d mes(es)\n", Months);
    printf("%d dia(s)\n", Days);

    return 0;
}
