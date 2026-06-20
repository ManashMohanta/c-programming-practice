#include <stdio.h>
#include <string.h>
int main()
{
    char c = 'a';
    int contains = 0;
    char str[] = "anju meri bhabi kasi hai";
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c){
            contains=1;
            break;
        }
    }
    if(contains){
        printf("Character found");
    }
    else{
        printf("Character not found");
    }
    return 0;
}