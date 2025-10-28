#include <stdio.h>
#include <stdlib.h>

int main ()
 {
     FILE *file;
     int n;
     file= fopen ("lab.txt", "r");

     if(file== NULL)
     {
         printff("Loading error\n");
     }
     else
     {
         fscanf("%d", n);

         printf("%d\n", n);
     }
     fclose(file);



     return 0;
 }
