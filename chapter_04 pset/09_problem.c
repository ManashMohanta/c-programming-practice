#include <stdio.h>
int main(){
int n=15;
int prime =0;
for (int i =2; i<n; i++)
{
    if (n%1==0){
        prime=1;
    }
}
    if (prime =1){
        printf(" is not  prime %d\n", prime );
    }
    else {
        printf(" is prime %d\n", prime );
    }

    return 0;
}