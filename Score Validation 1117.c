#include<stdio.h>
int main()
{
    int i, j=0;
    float n,avg,N[3];

    while(1){
        scanf("%f", &n);
    if(n>=0 && n<=10){
      N[j]=n;
      j++;
    }
    else
        printf("nota invalida\n");
        if(j>1)break;
    }
    avg = (N[0] + N[1])/2.0;
    printf("media = %0.2f\n", avg);
    return 0;
}
