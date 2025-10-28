#include<stdio.h>
int main()
{
   int x,n,i,rat=0,rabbit=0,frog=0,Total;
   char A;//A=Animal;
   scanf("%d", &n);
   for(i=0; i<n; i++){
    scanf("%d %c", &x, &A);
    if(A=='C'){rabbit+=x;}
    if(A=='R'){rat+=x;}
    if(A=='S'){frog+=x;}

   }
   Total = rabbit + rat + frog;
   double rabbit_p = (rabbit*100.00)/Total;
   double rat_p = (rat*100.00)/Total;
   double frog_p = (frog*100.00)/Total;

   printf("Total: %d cobaias\n", Total);
   printf("Total de coelhos: %d\n",rabbit);
   printf("Total de ratos: %d\n",rat);
   printf("Total de sapos: %d\n",frog);
   printf("Percentual de coelhos: %0.2lf %%\n", rabbit_p);
   printf("Percentual de ratos: %0.2lf %%\n", rat_p);
   printf("Percentual de sapos: %0.2lf %%\n", frog_p);


    return 0;
}
