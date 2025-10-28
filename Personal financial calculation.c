/* personal finance calculations, using function calls */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
/* function prototypes */
double mdl (double i,int m, double n) ;
double md2(double i,int m, double n);
double md3(double i,double n);
main()
{
/* calculate the future value of a series of monthly deposits */
enum {A = 1, S = 2, Q = 4, M = 12, D = 360, C} m;
/* number of compounding periods per year */
int count;
double n;
double a;
double i;
double f;
char freq;
/* loop counter */
/* number of years */
/* amount of each monthly payment */
/* annual interest rate */
/* future value */
/* frequency of compounding indicator */
/* enter input data */
printf("\nFUTURE VALUE OF A SERIES OF MONTHLY DEPOSITS\n\n");
printf("Amount of Each Monthly Payment: ");
scanf("%lf", &a);
printf("Number of Years: ");
scanf("%lf", &n);
{
/* enter frequency of compounding */
do
{
printf("Frequency of Compounding (A, S, Q, M, D, C): ");
scanf("%1s", &freq);
freq = toupper(freq);
if (freq == 'A')
    m = A;
{
/* convert to uppercase */
printf("\nAnnual Compounding\n");
}
else if(freq == 'S'){
m = S;
printf('\nSemiannual Compounding\n");
}
else if (freq == 'Q')
{
m = Q;
printf("\\nQuarterly Compounding\n");
}
else if (freq == 'M'){
m = M;
printf("\nMonthly Compounding\n");
}
else if (freq == 'D'){
m = D;
printf("\nDaily Compounding\n" );
}
else if (freq == 'C'){
m = C;
printf("\nContinuous Compounding\n");
}
else{
printf("\nERROR - Please Repaat\n\n");
}
while (freq != 'A' && freq I= 'S' && freq I= 'Q' && freq I= 'M' && freq != 'D' && freq I= 'C');
/* carry out the calculations */
printf("\nInterest Rate Future Amount\n\n");
for (count = 1; count <= 20; ++count)
i= 0.01 * count;
if (m == C)
f
= a * md3(i, n);
{
/* continuous compounding */
else if (m == D)
f
= a * md2(i, m, n);
else
f
= a * mdl(i, m, n);
printf (
1
%2d
/* daily compounding */
/* annual, semiannual, quarterly or
monthly compounding */
%.2f\n", count, f);
double mdl(doub1e i,int m, double n)
/* monthly deposits, periodic compounding */
double factor, ratio;
factor = 1 + i /m;
ratio = 12 * (pow(factor, m*n) - 1) / i;
return(rati0);
1
double md2(double i,int m, double n)
/* monthly deposits, daily compounding */
t
1
double factor, ratio;
factor = 1 + i /m;
ratio = (pow(factor, m*n) - 1) / (pow(factor, m/12) - 1);
return(rati0);
double md3(double i, double n)
/* monthly deposits, continuous compounding */
double ratio;
ratio = (exp(i*n) - 1) / (exp(i/l2) - 1);
return(rati0);
1
