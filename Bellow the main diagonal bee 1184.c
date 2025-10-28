#include<stdio.h>
int main()
{
    double N[12][12], sum=0.0;
    char X[2];
    scanf("%s", &X);
    int n=1,i,j;
    //for row and column input//
    for(i=0; i<12; i++){
        for(j=0; j<12; j++)
            scanf("%lf",&N[i][j]);

    }

    for(i=1; i<12; i++){ //for row's value cheak
        for(j=0; j<n; j++){ //for column value cheak
            sum += n[i][j];
        }
        n++;
    }
    //For sum or average//
    if(X[0]== 'S'){
        printf("%.1lf\n", sum);
    }else if(X[0]=='M'){
        printf("%.1lf\n",sum/66.0);
    }
        return 0;
}
