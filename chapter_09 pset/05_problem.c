#include <stdio.h>
typedef struct complex
{
    int real;
    int imag;

} complex;
void display(complex c)
{
    printf(" the value of vector is %di + %dj", c.real, c.imag);
}
int main()
{
    complex carr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter real part\n");
        scanf("%d", &carr[i].real);
        printf("enter imag part\n");
        scanf("%d", &carr[i].imag);
        display(carr[i]);
    }
        return 0;
    }