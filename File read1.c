#include<stdio.h>
#define MARR 99
int main()
{
int num[MARR];
int i, total=0;
for(i=0; i<MARR; i++)
    total = total+i;
printf("\n\tThe value of %d is %d\n\t", MARR, num[MARR]);

return 0;
}
