#include <stdio.h>
typedef struct Date
{
    int mm;
    int dd;
    int yyyy;
} Date;
int compare(Date d1, Date d2)
{
    if ((d1.yyyy == d2.yyyy) && (d1.mm == d2.mm && d1.dd == d2.dd) || (d1.yyyy == d2.yyyy && d1.mm == d2.mm && d1.dd > d2.dd))
    {
        return 0;
    }
    if (d1.yyyy > d2.yyyy) {
        return 1;
    }
     else if (d1.yyyy<d2.yyyy) {
        return -1;
    }
    else if (d1.mm > d2.mm) {
        return 1;
    }
     else if (d1.mm < d2.mm) {
        return -1;
    }
    else if (d1.dd > d2.dd) {
        return 1;
    }
     else if (d1.dd < d2.dd) {
        return -1;
    }
}
int main()
{
    struct Date d1 = {12, 11, 2023};
    struct Date d2 = {11, 12, 2023};
    printf("%d", compare(d1, d2));
    return 0;
}