#include<stdio.h>
int main()
{
    int arr[100]={},i,j;
    int n,swap,temp, counter =0;

    printf("\n\n*********************** Welcome to Bubble sort testing by helping MARR. ***********************************\n");
    printf("\n # Enter number of elements which you want to sorting with boubble:  ");
    scanf("%d", &n);

    printf("   # Enter %d integer numbers which you want to sorting:  \n ", n);

    for(i=0; i<n; i++)
    scanf("%d", &arr[i]);

      for(i=0; i<n-1; i++){ // Outer loop{
        for(j=0; j<n-i-1; j++){ // Inner loop for sorting
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swap =1;
            }
        } counter ++;
      }
      printf("\n****** Welcome Your data is proccesed.******\n");
      printf(" After sorted in ascending order of your number list is: \n");
      for(i=0; i<n; i++){
        printf("                                         %d\n", arr[i]);
      }
      printf("\n Total loop: %d\n", counter);
      printf("So nice of you... Let see will in the next problem (MARR)\n");
      return 0;
}
// Time Complexity : O(N^2)
// Space complexity: O(1)

