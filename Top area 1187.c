#include<stdio.h>
int main()
{
    double M[12][12], sum=0.0;
    char O[2];
    scanf("%s", &O);
    int n=1,m=11,row,colum;
    //for row and column input//
    for(row=0; row<12; row++){
        for(colum=0; colum<12; colum++){
            scanf("%lf",&M[row][colum]);
        }
    }
    for(row=0; row<5; row++){ //for row's value cheak
        for(colum=n; colum<m; colum++) //for column value cheak
            sum += M[row][colum];
        n++;
        m--;
    }
    //For sum or average//
    if(O[0]== 'S'){
        printf("%.1lf\n", sum);
    }else if(O[0]=='M'){
        printf("%.1lf\n",sum/30.0);}

        return 0;
}



