#include<stdio.h>
int main()
{
    int column,row,n;
    printf("Enter your Row number:");
    scanf("%d", &n);
    for(row=1; row<=n; row++){
        for(column=1; column<=(n-row)+40; column++)
            printf(" ");
        for(column=1; column<=2*row-1; column++)

            printf("I love you.");

            printf("\n");

    }

    return 0;
}
