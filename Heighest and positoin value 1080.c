#include<stdio.h>
int  main ()
{
    int i, N, highest = -1, position = -1;
    for(i=1; i<=100; i++){
        scanf("%d", &N);
        if(highest<N){
            highest = N;
            position = i;
    }
    }
    printf("%d\n", highest);
    printf("%d\n", position);

    return 0;
}

