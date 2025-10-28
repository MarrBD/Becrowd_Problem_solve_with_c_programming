#include<stdio.h>
int getFirstDayOfTheYear(int year){
int day = (year*365 + ((year-1)/4) -((year-1)/100) + ((year-1)/400)) %7;
return 0;
}

int main ()
{
    char *Months [] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int daysInMonth [] = {31, 28, 31, 30, 31, 30, 31, 31,30,31,30, 31};
    int i,j, totaldays, weekday=0, spacecounter =0, year ;

    printf("Enter Your Favorite Year: ");
    scanf("%d", &year);
    printf("\n\n\n ############## WELCOME TO MARR ENGLISH CALENDER ###############\n");

    printf("\n\n\n ############## Calender of %d ##############\n", year);

    if((year%4 == 0 && year%100 !=0) || (year%400 == 0)){
        daysInMonth[1] = 29;
    }
    //Get the first daay of the year;
    weekday = getFirstDayOfTheYear(year);

    for(i=0; i<=12; i++){
        printf("\n\n\n\n   ***************************** %s *****************************                 \n", Months[i]);
        printf("\n      Sun     Mon     Tue     Wed     Thu     Fri    Sat\n");

        for(spacecounter =1; spacecounter <= weekday; spacecounter++){
            printf("        ");
        }
        totaldays = daysInMonth[i];
        for(j=1; j<=totaldays; j++){
                printf("   ");
            printf("%5d", j);
            weekday++;
            if(weekday > 6){
                weekday =0;
                printf("\n");
            }
        }
    }


    return 0;
}
