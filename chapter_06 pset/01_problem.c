#include <stdio.h>
int main(){
    int i=4;
    int*ptr=&i;
    printf("address of i is %u\n", &i);
    printf("address stored in ptr is %u\n", ptr);
    return 0;
}