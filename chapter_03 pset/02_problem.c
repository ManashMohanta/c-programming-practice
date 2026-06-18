#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter marks  :\n");
    scanf("%d", &a);
    printf("enter marks:\n");
    scanf("%d", &b);
    printf("enter marks:\n");
    scanf("%d", &c);
    printf(" the marks are %d %d %d\n", a, b, c);
    if (a < 33 || b < 33 || c < 33)
    {
        printf("you are failed due to less marks in individual subject(s)\n");
    }
    else if ((a + b + c) / 3 < 40)
    {
        printf("you are faild due to less percentage\n");
    }
    else
    {
        printf("you are passed\n");
    }


return 0;
}