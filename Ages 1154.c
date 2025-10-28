#include<stdio.h>
int main ()

{
    int div=0,age;
    double sum=0, avg=0;
    while(1){
        scanf("%d", &age);
        if(age<0)break;
        sum = sum+age;
        div+= 1;
    }
        avg = sum/div;
        printf("%.2lf\n", avg);

    return 0;
}
