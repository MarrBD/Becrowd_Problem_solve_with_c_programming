#include<stdio.h>
#include<string.h>
int main ()
{
    char ar1[15], ar2[15], ar3[15];
    gets (ar1);
    gets (ar2);
    gets (ar3);
    if(ar1[0]=='v'){
        if(ar2[0]=='a'){
            if(ar3[0]=='c'){ printf("aguia\n");}
        else { printf("pomba\n");}
    }
    else {
        if (ar3[0]=='o'){ printf("homen\n");}
        else { printf("vaca\n");}
    }
    }
    else {
        if(ar2[0]=='i'){
            if(ar3[2]=='m'){ printf("pulga\n");}
        else { printf("lagarta\n");}
    }
    else {
        if (ar3[0]=='i'){ printf("sanguessuga\n");}
        else { printf("minhoca\n");}
    }
    }

    return 0;
}
