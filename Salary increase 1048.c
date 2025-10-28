#include<stdio.h>
int main()
{
   float a, salary, bonus;
   int percentage;
   scanf("%f", &a);

   if(a>=0 && a<=400.0)
   {
        percentage = 15;
        bonus = (a * percentage)/100;
       salary = (a + bonus);
   }
   else if(a>=400.01 && a<=800.00)
    {
        percentage = 12;
        bonus = (a*12)/100;
        salary = a+bonus;
    }
    else if(a>=800.01 && a<=1200.00)
    {
        percentage = 10;
        bonus = (a*10)/100;
        salary = a+bonus;
    }
    else if(a>=1200.01 && a<=2000.00)
    {
        percentage = 7;
        bonus = (a*7)/100;
        salary = a+bonus;
    }
    else if(a>2000.00)
    {
        percentage = 4;
        bonus = (a*4)/100;
        salary = a+bonus;
    }
    printf("Novo salario: %.2f\n", salary);
    printf("Reajuste ganho: %.2f\n", bonus);
    printf("Em percentual: %d %%\n", percentage);

    return 0;
}

