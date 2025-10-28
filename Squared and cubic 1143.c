#include<stdio.h>
int main()
{
    int i,a=1,n;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        printf("%d %d %d\n", a,(a*a),(a*a*a));
 a+=1;
    }
   return 0;
}
