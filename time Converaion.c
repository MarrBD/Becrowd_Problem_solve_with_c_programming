#include <stdio.h>
int main ()
{
   int N, Hours, Minutes, Seconds, Remainder;

    scanf("%d", &N);

    Hours = N/3600;
    Remainder = N % 3600;
    Minutes = Remainder/60;
    Remainder = Remainder % 60;
    Seconds = Remainder;

    printf("%d:%d:%d\n", Hours, Minutes, Seconds);

    return 0;
}
