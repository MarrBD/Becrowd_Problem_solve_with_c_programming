#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("\n Enter a character: ");
    ch = getche();
    switch (ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("\n\n\n\a Your choice is vowel.");
        break;

        default:
        printf("\n\n\n\a Your choich is Consonant.");
        break;

    }
        getch();
}

