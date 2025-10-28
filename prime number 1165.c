#include<stdio.h>
int main()
{
    int number, i,a,j,n;
    scanf("%d", &n);
        for(i=1; i<=n; i++)
            {
            scanf("%d", &number);
            a=0;
                for(j=1; j<=number; j++)
                {
                if(number%j==0)
                    a++;
                }
                if(a==2)
                {
                    printf("%d eh primo\n", number);
                }
                else
                {
                    printf("%d nao eh primo\n", number);
                }
            }
            return 0;

}
