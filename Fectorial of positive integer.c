#include<stdio.h>
long long int fectorial (int n)
{
    if(n==0 || n==1){
        return 1;}
        else {
            return n * fectorial (n-1);
        }
    }
    int main ()
    {
      int num;
      printf("Enter a positive integer:");
      scanf("%d", &num);

      if (num<0){
        printf("Fectorial is not defined for negative integer numbers.\n");
      }else{
      printf("Fectorial of %d is = %llu\n", num,fectorial);
      }

    return 0;
}

