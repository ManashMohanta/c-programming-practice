#include <stdio.h>
int main(){
    int n;
    printf("Enter a number of which table you want: ");
    scanf("%d", &n);
   int arr[10];
   for (int i=0; i<10; i++){
       arr[i] = (i+1)*n;
   }
   for (int i=0; i<10; i++){
       printf("%d x %d = %d\n", n, i+1, arr[i]);
   }
   return 0;
}