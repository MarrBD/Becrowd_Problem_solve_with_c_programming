#include<stdio.h>
#include<conio.h>

void square_num(void)
    {
        int num;
        printf("\n\n****Number:   *****Square:\n");
        for(num = 0; num<=10; num++)
            printf("   %3d \t\t  %3d\n", num, num*num);
    }


void cube_num(void)
    {
        int num;
        printf("\n\n****Number:   *****Cube:\n");
        for(num = 0; num<=10; num++)
            printf("   %3d \t\t  %5d\n", num, num*num*num);
    }



   //Cosine.c

   void Cosine(void)
   {
       int i, n=20;
       float x, y = 1, sum = 1;
       printf("\n Input a number (x): ");
       scanf("%f", &x);
       x = x * 3.1412 / 180;
       y = 1;
       for(i=1; i<x+1; i++)
       {
           y = y * pow((double)(-1), (double)(2 * i - 1)) * x * x / (2 * i * (2 * i -1));
           sum = sum + y;
       }
       printf("\n cos((%f ) = %.3f\n\n", x , sum);

   }

   long int factorial(int n)
   {
       if(n<=1)
            return 1;
       else
            return(n*factorial(n-1));

   }




//clrscr();
void main(){

    //(1):
    printf("\n\n Press any number key to see square number from 1 to 10.");
    getch();
    square_num();

    //(2):
    printf("\n\n Press any number key to see square number from 1 to 10.");
    getch();
    cube_num();

    //(3):
    printf("\n\n Now we can find any value of cosine!\n");
    Cosine();
    getch();

    int n;
    printf("\nType any number: ");
    scanf("%d", &n);
    printf("\n\nFactorial value of %d is = %d\n", n, factorial(n));


return 0;
}
