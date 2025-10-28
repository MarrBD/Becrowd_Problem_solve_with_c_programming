#include<stdio.h>
#include<math.h>
int main ()
{
    double a, b, c, x1, x2, root;
    printf("Enter the value of a: ");
    scanf("%lf", &a);
    printf("Enter the value of b: ");
    scanf("%lf", &b);
    printf("Enter the value of c: ");
    scanf("%lf", &c);

    root = sqrt(b*b-4*a*c);
    x1 = (-b + root)/(2*a);
    x1 = (-b - root)/(2*a);

    print("The value of x1: %lf\n", x1);
    print("The value of x2: %lf\n", x2);

    return 0;
}
