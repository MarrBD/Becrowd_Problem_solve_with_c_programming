#include<stdio.h>
#include<stdlib.h>
int  main()
{
    int password;
    while(1){
        scanf("%d", &password);
        if(password==2002){
            printf("Acesso Permitido\n");
        exit(0);
        }
        else{printf("Senha Invalida\n");}
    }
    return 0;
}
