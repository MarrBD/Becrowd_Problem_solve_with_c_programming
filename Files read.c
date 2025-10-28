#include<stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("data.txt", "r");
    int c;
    while (1)
    {
        c = fgetc(fp);
        if(c == EOF){
            break;
        }
        printf("%c", c);
    }

    return 0;
}
