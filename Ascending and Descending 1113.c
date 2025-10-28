#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,i,x,y;
    while(1){
        scanf("%d %d", &a, &b);
        if(a==b){
            exit(0);
        }
        if(a<b){
            printf("Crescente\n");
        }else{
        printf("Decrescente\n");}
    }
    return 0;
}
