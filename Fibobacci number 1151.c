#include<stdio.h>
int main()
{
    int N,Fib=0,a=1;
    scanf("%d", &N);
    if(N<46){
        printf("%d %d", Fib,a);
        printf(" ");
        Fib = Fib + a;
        a++;
        Fib++;
          printf("%d", Fib);



    }

    return 0;
}
