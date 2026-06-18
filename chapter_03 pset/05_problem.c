#include <stdio.h>
int main(){
    char ch = 'a';
    printf("the character is %c\n", ch);
     printf("the value of  character is %d\n", ch);
     if (ch>=94&& ch<=122)
        {
            printf("the character is lowercase letter\n");
        }
        else{
            printf("the character is not lowercase letter\n");
        }
    return 0;
}