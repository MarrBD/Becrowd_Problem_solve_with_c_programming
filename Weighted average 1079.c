
#include<stdio.h>
int main()
{
    int i,n;
    float x1,x2,x3,tx,avg=0;
    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%f %f %f", &x1,&x2,&x3);

        tx = ((x1*2) + (x2*3) + (x3*5));
        avg = tx/10.0;
        printf("%.1f\n", avg);
    }

    return 0;
}
