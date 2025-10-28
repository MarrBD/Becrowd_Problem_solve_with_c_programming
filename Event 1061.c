#include<stdio.h>
int main ()
{
   int d1,d2,h1,h2,m1,m2,s1,s2,total_s1,total_s2,days,hours,minutes,seconds,ts;

   scanf("%*s %d", &d1);
   scanf("%d %*s", &h1);
   scanf("%d %*s", &m1);
   scanf("%d", &s1);
   scanf("%*s %d", &d2);
   scanf("%d %*s", &h2);
   scanf("%d %*s", &m2);
   scanf("%d", &s2);

   total_s1 = (86400*d1) + (3600*h1) + (60*m1) + s1;
   total_s2 = (86400*d2) + (3600*h2) + (60*m2) + s2;
   ts = (total_s2) - (total_s1);
    days = ts/86400;
    ts = ts % 86400;
    hours = ts/3600;
    ts = ts % 3600;
    minutes = ts/60;
    seconds = ts % 60;

    printf("%d dia(s)\n", days);
    printf("%d hora(s)s)\n", hours);
    printf("%d minuto(s)\n", minutes);
    printf("%d segundo(s)\n", seconds);


    return 0;
}
