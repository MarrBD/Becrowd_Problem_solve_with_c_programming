#include<stdio.h>
int main()
{
    unsigned short int row,colum,input;


while(scanf("%hd", &input);) {

        short matrix[input][input];
    for(row=0; row<input; row++)
    for(colum=0; colum<input; colum++){

        if(row==colum)
            matrix[row][colum] = 1;
        if(row == input - colum - 1)
            matrix[row][colum] = 2;
        if(row != colum && row != input - colum - 1)

    }
}
    return 0;
}
