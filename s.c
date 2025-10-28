#include<stdio.h>
int main()
{
    int arr[100]={},i,j;
    int n,swap,temp, min_index, counter =0;

    printf("\n\n*********************** Welcome to testing Selecion sort with MARR. ***********************************\n");
    printf("\n Enter number of elements which you want to selection sort:  ");
    scanf("%d", &n);

    printf("Enter %d integer numbers which you want to sorting: \n", n);

    for(i=0; i<n; i++)
    scanf("%d", &arr[i]); // The loop for print the array.

      for(i=0; i<n; i++) // Oter loop to iterate over all the number.
        {
            min_index = i;
        for(j= i+1; j<n; j++){// Inner loop to find the minimum value.
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }   counter ++;
         // Swap two numbers.
            temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }

      printf("\n****** Welcome Your data is proccesed.\n");
      printf("\n After sorted in ascending order of your number list is: \n");
      for(i=0; i<n; i++){
        printf("                                         %d\n", arr[i]);
      }
      printf("\n Total loop: %d\n", counter);
      printf("So nice of you... Let see will in the next problem (MARR)\n");
      return 0;
}
// Time Complexity : O(N^2)
// Space complexity: O(1)
