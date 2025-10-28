#include<stdio.h>

int main()
{
    int code,item;
    scanf("%d %d",&code,&item);

    float price[]={4.00,4.50,5.00,2.00,1.50};

    float total = price[code-1]*item;
    printf("TOTAL: R$%.2f\n",total);
    return 0;
}