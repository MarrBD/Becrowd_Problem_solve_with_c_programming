#include <stdio.h>
int main()
{
    int p1code, p1units;
    double p1price;

    int p2code, p2units;
    double p2price;

    scanf("%d %d %lf", &p1code, &p1units, &p1price);
    scanf("%d %d %lf", &p2code, &p2units, &p2price);

    double value1 = p1units * p1price;
    double value2 = p2units * p2price;
    double totalprice = value1 + value2;

    printf("VALOR A PAGAR: R$ %.2lf\n", totalprice);

return 0;
}
