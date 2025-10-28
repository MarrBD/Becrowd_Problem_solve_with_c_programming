#include<stdio.h>
#include<stdlib.h>
int main ()
{
int num;
FILE *fptr;
fptr = fopen("D:\c.kana.txt","r");

if(fptr == NULL){
    printf("Error!.");
    exit(1);
}
fscanf("%d", &num);
printf("%d", num);

fclose(fptr);

return 0;
}


