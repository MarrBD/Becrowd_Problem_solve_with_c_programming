#include<stdio.h>
int main()
{
    int row, colum,sqr,input;

    for(;;){ //for continous loops

        scanf("%d", &input);
        if(input==0)
            break;
        int matrix[input][input];

        for(row=0; row<input; row++){

            int colum1=row+1;
            int colum2=2;

            for(colum=0; colum<=row; colum++,colum1--){
                    matrix[row][colum] = colum1;

            }
            for(colum=row+1; colum<input; colum++,colum2++){
                matrix[row][colum] = colum2;
            }
        }
        for(row=0; row<input; row++){
            for(colum=0; colum<input; colum++){

                if(colum==0) printf("%3d", matrix[row][colum]);
            else printf(" %3d", matrix[row][colum]);
            }
            printf("\n");
        }printf("\n");

    }

    return 0;
}
