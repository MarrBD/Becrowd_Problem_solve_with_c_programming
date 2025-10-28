#include<stdio.h>
#include<string.h>

 int main() {
     char address[] = "NCG-Hell plaza, Heaven Road, The Quater Road of jahannam, Baitullah, jannaat Road.";
     int length;
     length = strlen(address);

     printf("The String is: %s\n", address);
     printf("\n This String Contains %d Characters.\n", length);

     return 0;
 }
