#include<stdio.h>
int main()
{
    char *city_name[7] = { "Sylhet", "Barisal", "Rajshahi", "Khulna", "Chitagong", "Dhaka", "Rangpur"};
    int n;
    for(n=0; n<7; n++){
        printf("\n City_name[#%d] is  %s.", n+1, city_name[n]);
    }

    return 0;

}
