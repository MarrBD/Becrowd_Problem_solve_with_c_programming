#include<stdio.h>
#include<stdlib.h>
int main()
{
    int M,N,i,sum=0,temp;

    while(1){
        scanf("%d %d", &M, &N);
        if(M<=0 || N<=0){
        exit(0);
        }

        if(M>N){temp=M; M=N; temp=N;}

            for(i=M; i<=N; i++){
            sum+=i;
                printf("%d ", i);
            }
            printf("sum=%d\n", sum);
            sum=0;
        }

    return 0;
}
