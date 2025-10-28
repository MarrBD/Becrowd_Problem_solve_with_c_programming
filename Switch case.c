#include<stdio.h>
int main()
{
    int Old, position_type;
    printf("Enter Your old: ");
    scanf("%d", &Old);
    position_type = Old/10;
    switch(position_type)
    {

    case 10:
    case  9:
    case 8:
    case 7:
    case 6:
    printf("You are oldman\n");
    break;

    case 5:
    printf("You are going to be oldman\n");
    break;

    case 4:
    printf("You are Young man\n");
    break;

    case 3:
    printf("You are going to be Young man\n");
    break;

    case 2:
    printf("You are Adult\n");
    break;

    case 1:
    printf("You are a Adolescent\n");
    break;

    case 0:
    printf("You are child\n");
    break;
}
return 0;

}
