#include <stdio.h>
int main()
{
    int Number, Totalwh;
    double wpha, Salary;

    scanf("%d %d %lf", &Number, &Totalwh, &wpha);
    Salary = Totalwh * wpha;

    printf("NUMBER = %d\n", Number);
    printf("SALARY = US %.2lf\n", Salary);

    return 0;
}
