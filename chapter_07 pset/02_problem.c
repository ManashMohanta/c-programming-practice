#include <stdio.h>
int main(){
   int arr[10];
   for (int i=0; i<10; i++){
       arr[i] = (i+1)*7;
   }
   for (int i=0; i<10; i++){
       printf("7 x %d = %d\n", i+1, arr[i]);
   }
   return 0;
}