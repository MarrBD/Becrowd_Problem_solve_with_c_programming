#include<stdio.h>
int main()
{
   int x,y,temp,i,cv,sum=0;  //ct = count value
   scanf("%d %d", &x, &y);

    if(x>y){
        temp = x;  x = y;  y = temp;
    }
    if(x%2 == 0){
        cv = x+1;
    }else{
    cv = x+2;
    }
    for(i=cv; i<y; i+=2)
        sum = sum+i;
    printf("%d\n", sum);

    return 0;
}





