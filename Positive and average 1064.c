#include<stdio.h>
int main()
{
   float value, avg, top=0; //top = total of positive
   int i, p_count; //p_count = positive count
   for(i=0; i<6; i++){
    scanf("%f", &value);
    if(value>0){
        top = top + value;
        p_count++;
    }
   }
   avg = top/p_count;
   printf("%d valores positivos\n", p_count);
   printf("%0.1f\n", avg);

    return 0;
}
