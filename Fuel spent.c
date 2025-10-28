#include <stdio.h>
int main ()
{
    int ttime, avgspd;
    double avgdistance, nlitersf;
    scanf("%d %d", &ttime, &avgspd);

    avgdistance = ttime * avgspd;
    nlitersf = avgdistance/12;

    printf("%.3lf\n", nlitersf);

    return 0;
}
