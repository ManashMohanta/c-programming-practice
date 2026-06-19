#include <stdio.h>
int sum_natural(int);
int sum_natural(int n){
    if(n==1){
        return 1;
    }
    return n+sum_natural(n-1);
}
int main(){
    printf("%d", sum_natural(5));
    return 0;
}