#include<stdio.h>
int main()
{
    double Area[12][12], sum=0.0;
    char X[2];
    scanf("%s", &X);
    int hc=10,row,column;
    //for row and column input//
    for(row=0; row<12; row++){
        for(column=0; column<12; column++){
            scanf("%lf",&Area[row][column]);
        }
    }
    for(row=0; row<11; row++){ //for row's value cheak
        for(column=0; column<hc; column++){ //for column value cheak
            sum = sum + Area[row][column];
    }
        hc--;
    }
    //For sum or average//
    if(X[0] == 'S'){
        printf("%.1lf\n", sum);
    }else if(X[0]=='M'){
        printf("%.1lf\n",sum/66.0);}

        return 0;
}

