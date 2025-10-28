#include<stdio.h>
int main()

{
    double numrtr, denmntr=1, fraction, sum=0, n;
    for(numrtr=1; numrtr<=39; numrtr+=2){
        fraction = numrtr/denmntr;
        sum+= fraction;
        denmntr*= 2;
    }
    printf("%.2lf\n", sum);

    return 0;

    }

