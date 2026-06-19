#include <stdio.h>
int main(){
//8!=1*2*3*4*5*6*7*8  int  sum = 0;
int product =1;
int n=4;
for (int i = 1; i <=n; i++)
{
    product*=i;
}
printf(" the  factorial is %d\n", product );

    return 0;
}