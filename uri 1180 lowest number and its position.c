#include<stdio.h>
int main()
{

    int n, arr[1000], i, j, min, p;

    scanf("%d", &n);
    for(i=0; i<n; i++){ //Loop for the input value of n
            scanf("%d", &arr[i]);
            if(i==1){
                if(arr[0]<arr[1])
                {
                    min = arr[0];
                    p=0;
                }
                else if(arr[0]>arr[1]){
                    min = arr[1];
                    p = 1;
                } else {
                min = arr[0];
                p = 0;
                }
            }
                if(i>1)
                {
                    if(arr[i]<min)
                    {
                        min=arr[i];
                        p=i;
                    }
                }
    }
    printf("Menor valor: %d\n", min);
    printf("Posicao: %d\n", p);

    return 0;
}
