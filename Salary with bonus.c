#include <stdio.h>
int main()
{
    char name[100];
    double salary, tvs, totalsalary, bonus;

    scanf("%s %lf %lf", name, &salary, &tvs);

    bonus = tvs * 0.15;
    totalsalary = salary + bonus;

    printf("SALARY = R$ %.2lf\n", totalsalary);

    return 0;

}
