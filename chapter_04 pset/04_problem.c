#include <stdio.h>
int main()
{
    int i = 1, sum = 0;

    do 
    {

        sum += i;
        i++;
    } while (i <=5 );
        printf(" the sum of the no. is %d\n", sum);
    
    return 0;
}