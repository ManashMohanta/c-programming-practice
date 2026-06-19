#include <stdio.h>

   int main(){
    int i=4;
    int *ptr1=&i;
    int**ptr2=&ptr1;
    printf("the address of i is %u\n",&i);
    printf("the address of i is %u\n",*ptr1);
     printf("the address of i is %u\n",**ptr2);
     return 0;}