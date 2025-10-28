//project of smart stopwatch.
#include<stdio.h>
#include<conio.h>
#define CYCLE 60
#define sleep(x) Sleep(x*1000)

int main()
{
    int hour, minute, second, h=0, m=0, s=0;
    printf("Enter your hour: minute: second:");
    scanf("%d %d %d", &hour, &minute, &second);
    clrscr();

    while (1)
    {
        printf("\n\n\n################## STOP WATCH MARR ##################\n\n\n\n");
        printf("                  %.2d:%.2d:%.2d\n", h,m,s);
        printf("\n\n\n############################################################\n\n\n");

        if(h==hour && m==minute && s==second){
            break;}
            else{clrscr();}
            s++;
            sleep(1);

            if(s==CYCLE){
                m++;
                s=0;
            }
            if(m==CYCLE){
                h++;
                m=0;
            }
        }

    return 0;
}
