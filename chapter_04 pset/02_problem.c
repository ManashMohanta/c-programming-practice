#include <stdio.h>
int main()
{
    int n =10 ;
    printf("Enter a number to print its multiplication table:\n");
    scanf("%d",&n);
    for (int i = 10; i ; i--)
    {
        printf("%d X %d = %d\n", n, i, n*i);
    }
    return 0;
}