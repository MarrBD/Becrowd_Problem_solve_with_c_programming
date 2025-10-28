#include<stdio.h>
int main(){
    int n,i,chrg,result;

    scanf("%d",&n);

    for(i=0; i<n; i++){

        scanf("%d",&chrg);
        if(chrg<=15){
            printf("Yes\n");
        }else{
        printf("No\n");
        }

    }
}
