#include<stdio.h>
int main()

{
    double div,n, sum = 0;

        for(div=1; div<=100; div++){
           n = (1/div);
            sum = sum+n;
        }

        printf("%.2lf\n", sum);

    return 0;
}
