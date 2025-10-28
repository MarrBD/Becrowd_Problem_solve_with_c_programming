#include<stdio.h>
int main()
{
    int x,y, match=0, inter=0, gremeo=0, droo=0, time;
    while(1){
        scanf("%d %d", &x, &y);
        printf("Novo grenal (1-sim 2-nao)\n");
        match++;
        if(x>y)inter++;
        else if(x<y) gremeo++;
        else droo++;
        scanf("%d", &time);
        if(time==1) continue;
        else break;
    }
        printf("%d grenais\n", match);
        printf("Inter:%d\n", inter);
        printf("Gremio:%d\n", gremeo);
        printf("Empates:%d\n", droo);

        if(inter>gremeo) printf("Inter venceu mais\n");
        else if(inter<gremeo) printf("Gremio venceu mais\n");
        else printf("Nao houve vencedor\n");

        return 0;


    }


