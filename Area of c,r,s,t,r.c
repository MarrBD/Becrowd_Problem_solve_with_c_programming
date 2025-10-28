
#include <stdio.h>
int main ()
{
    double A, B, C, pi = 3.14159;
    scanf("%lf %lf %lf", &A, &B, &C);

    double art = 0.5 * A * C;
    double arc = pi * C * C;
    double at = 0.5 * (A+B) *C;
    double as = B * B;
    double ar = A * B;

    printf("TRIANGULO: %.3lf\n", art);
    printf("CIRCULO: %.3lf\n", arc);
    printf("TRAPEZIO: %.3lf\n", at);
    printf("QUADRADO: %.3lf\n", as);
    printf("RETANGULO:%.3lf\n", ar);

    return 0;
}
