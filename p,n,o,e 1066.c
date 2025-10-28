#include<stdio.h>
int main()
{
   int i, value,even_count = 0, odd_count = 0, positive_count = 0, negative_count = 0;
   for(i=0; i<5; i++){
    scanf("%d", &value);
    if(value%2 == 0){even_count++;}
    if(value%2 != 0){odd_count++;}
    if(value<0){negative_count++;}
    if(value>0){positive_count++;}

   }

    printf("%d valor(es) par(es)\n", even_count);
    printf("%d valor(es) impar(es)\n", odd_count);
    printf("%d valor(es) positivo(s)\n", positive_count);
    printf("%d valor(es) negativo(s)\n", negative_count);

    return 0;
}


