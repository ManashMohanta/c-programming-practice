#include <stdio.h>
int main()
{
    // 8!=1*2*3*4*5*6*7*8
    int i = 1;
    int product = 1;
    int n = 4;
    while (i <= n)
        
    {
        product *= i;
        i++;
    }
    printf(" the factorial of the is %d\n", product);

    return 0;
}