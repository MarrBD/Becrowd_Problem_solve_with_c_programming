#include<stdio.h>
int main()
{
    int a=1,i,n;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        printf("%d %d %d\n", a,(a*a),(a*a*a));
        printf("%d %d %d\n", a,(a*a)+1,(a*a*a)+1);
        a+=1;

    }
    return 0;
}
