#include<stdio.h>
int main()
{
    int i, j, k, m=1, count=0;
    float a[12][12], sum=0;
    char o;

   // printf("Enter your Loop No and String: \n");
    scanf("%c",&o);
    for(i=0; i<12; i++){ // loop for row
        for(j=0; j<12; j++){  // loop for column
                //input the value of row and column
            scanf("%f", &a[i][j]);

    }
        }
    for(i=0; i<12; i++){
    {
        for(j=m; j<12; j++)
    {
        sum += a[i][m];
        count++;
    }
        m++;
        }
    if(o=='S'){
            printf("%.1f\n", sum);
    }
    else{
        printf("%.1f\n", sum/count);
    }
    return 0;
}


