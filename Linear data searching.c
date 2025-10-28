// Linear searching algorithm in c
#include<stdio.h>
int main()
{
    int data[15] = {14,15,13,22,5,7,9,10,8,9,8,25,35,28,7};
    int s_data,found=0,i;

    printf("Input the data which you are finding by linearly: ");
    scanf("%d", &s_data);

    for(i=0; i<15; i++)
    {
        if(data[i] == s_data){
            printf("\n\n\n\n ***** Welcome! Your data is founded.*****\n **** And the data is at index Number: [%d] ****\n",i);
            found++;
            return;
        }
    }
        printf("Sorry! your data is not founded in this array! please try another data.\n");

    return 0;
}
// Runtime Complexity: O(N)
// Space Complexity: O(1)
