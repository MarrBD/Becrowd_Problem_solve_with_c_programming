#include<stdio.h>
int main()
{
    char name[64];

    printf("\n Your name please: ");
    gets(name);

   //l. printf("\n\n So, You are %s\n", name);
    puts(name);

    return 0;
}
