#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, Nishchayok, R1, R2;
    scanf("%lf %lf %lf", &a, &b, &c);
    Nishchayok = (b*b) - (4*a*c);

    if(a == 0 || Nishchayok<0)
    {
        printf("Impossivel calcular\n");
    }else {
        R1 = ((-b)+ (sqrt(Nishchayok)))/ (2*a);
        printf("R1 = %.5lf\n", R1);
        R2 = ((-b)- (sqrt(Nishchayok)))/ (2*a);
        printf("R2 = %.5lf\n", R2);
    }
    return 0;
}
