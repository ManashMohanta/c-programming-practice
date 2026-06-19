#include <stdio.h>
int returning_5(int* ptr){
    printf("the value of i is %d\n", ptr);
   printf("the value of i is %d\n", *ptr);
   return 5;
}
int main(){
    int i=2;
    int*ptr=&i;
    printf("address of i is %u\n", &i);
    returning_5(ptr);
    return 0;
}