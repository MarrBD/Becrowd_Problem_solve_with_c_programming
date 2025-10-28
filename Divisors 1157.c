#include <stdio.h>

int main()

{
    int num,divsr;

    scanf("%d", &num);

    for(divsr=1; divsr<=num; divsr++){
        if(num % divsr==0){

            printf("%d\n",divsr);
        }
    }

    return 0;
}

