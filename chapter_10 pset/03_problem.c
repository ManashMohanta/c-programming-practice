
#include <stdio.h>
int main()
{
    char ch;
    FILE *ptr;
    FILE*ptr2;
    ptr= fopen("manash.txt", "r");
    ptr2= fopen("manash1.txt", "a");
    while (1)
    {
        ch=fgetc(ptr);
        if(ch==EOF)
        {
            break;
        }
        ch = fgetc(ptr);
        fprintf(ptr2,"%c", ch);
        fprintf(ptr2,"%c", ch);
     printf("%c", ch);
    }
    return 0;
}