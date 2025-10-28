#include<stdio.h>
int main()
{
    int pcn;
    scanf("%d", &pcn);

    if(pcn==61){printf("Brasilia\n");}
    else if(pcn==71){printf("Salvador\n");}
    else if(pcn==11){printf("Sao Paulo\n");}
    else if(pcn==21){printf("Rio de janeioro\n");}
    else if(pcn==32){printf("Juiz de Fora\n");}
    else if(pcn==19){printf("Campinas\n");}
    else if(pcn==27){printf("Vitoria\n");}
    else if(pcn==31){printf("Belo Horizonte\n");}

    else {printf("DDD nao cadastrado\n");}

    return 0;
}
