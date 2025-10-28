#include<stdio.h>
int main()
{
   int n,x,i, in_v = 0,out_v = 0;  //ct = count value
   scanf("%d", &n);
       for(i=0; i<n; i++){
        scanf("%d", &x);
        if((x>=10) && (x<=20))
            in_v++;
        else
        out_v++;
}
    printf("%d in\n", in_v);
    printf("%d out\n", out_v);

    return 0;
}






