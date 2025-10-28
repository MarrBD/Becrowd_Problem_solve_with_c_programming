#include<stdio.h>
int main()
{
    int input,lenth,weight,sqr,h,l;

    for(;;){
        scanf("%d", &input);
        if(input==0)
            break;

        int matrix[input][input];
        int layer = input/2;

        if(input%2==1)
            layer++;
            l=0;
            h = input-1;

        for(sqr=1; sqr<=layer; sqr++){
            for(lenth=l; lenth<=h; lenth++){
                    for(weight=l; weight<=h; weight++){
                        matrix[lenth][weight]=sqr;
                    }
                }
                l++; h--;
        }
            for(lenth=0; lenth<input; lenth++){
                for(weight=0; weight<input; weight++){
                    if(weight==0){printf("%3d", matrix[lenth][weight]);}
                    else printf(" %3d", matrix[lenth][weight]);
                }
                printf("\n");
            }
            printf("\n");

            }

    return 0;
}
