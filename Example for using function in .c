#include<stdio.h>
int add(int a, int b)
{
    int result;
    result = a+b;
    return result;
}
int sub(int a, int b)
{
    int result;
    result = a-b;
    return result;
}
int mul(int a, int b)
{
    int result;
    result = a*b;
    return result;
}
int main ()
{
    int num1,num2;

    printf("Enter your value of num1 and num2:\n");

    scanf("%d %d", &num1, &num2);

    printf("Summation of num1 and num2 is: %d\n", add(num1,num2));
    printf("Subtraction of num1 and num2 is: %d\n", sub(num1,num2));
    printf("Multiplication of num1 and num2 is: %d\n", mul(num1,num2));

    return 0;
}

