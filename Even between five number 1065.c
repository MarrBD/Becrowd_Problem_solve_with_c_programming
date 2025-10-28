#include<stdio.h>
int main()
{
   int i, value,even_count = 0;
   for(i=0; i<5; i++){
    scanf("%d", &value);
    if(value%2==0){
        even_count++;
    }
   }
   printf("%d valores pares\n", even_count);

    return 0;
}

