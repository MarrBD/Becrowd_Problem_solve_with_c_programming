#include<stdio.h>
int main()
         {
             int row=0, col=0, size=0, sumabove=0,sumbellow=0, matrix[5][5];
             printf("\n matrix size? ");
             for(row=1; row<size+1; ++row){
             for(col=1; col<size+1; ++col)
               {
                printf("              Elements[%d][%d] :", row, col);
             scanf("%d", &matrix[row][col]);
         }printf("\n");
         }
          printf("\n The given matrix is : \n");
             for(row=1; row<size+1; ++row){
             for(col=1; col<size+1; ++col)
             {
                  printf("%4d", matrix[row][col];
             }

         }
