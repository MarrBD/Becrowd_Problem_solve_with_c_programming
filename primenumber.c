#include<stdio.h>
int main()
{
    int i, j, n;
            printf("Enter your input: \n", n);
            for(i=0; i<=10; i++){
        scanf("%d", &n);
       if(n!=0 || n!=1 || n%2 != 0 || n%3 != 0 || n%5 != 0 || n%7 != 0){
        for(j=0; j<i; j++)

        printf("The prime number are: %d", j);
            }
            }
    return 0;
}
