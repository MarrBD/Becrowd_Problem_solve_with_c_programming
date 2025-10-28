#include<stdio.h>
int main()
{
    int array[11] = {12, 13, 19, 34, 38, 50, 55, 61, 66, 77, 99};
    int left, right, middle, s_item, n;

    left =0;
    right = 10;

    printf("Enter a value which you are searching with Binary algorithm: ");
    scanf("%d", &s_item);

    while(left <= right){
            middle = (left+right)/2;

        if(array[middle] == s_item){
            printf("\n\n\n\***** Welcome, Your searching data is founded. **** \n ***** And your s_item is at index: %d. *****\n", middle);
            return 0;
        }else if(array[middle] < s_item){
            left = middle +1;

        }else{ right = middle -1;}

    }
    printf("\n\n Sorry, Your searching data is not founded in this array.\n plese try to search for another data.\n I will try to my best for finding your data.\n");

    return 0;
}

// Runtime complexity: O(logN)
// Space Complexity: O(1)
// Best case : O(1)
// Wek
