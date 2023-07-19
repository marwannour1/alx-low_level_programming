#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;

    c='t';
    printf("Return value when %c is passed to islower(): %d", c, islower(c));

    c='D';
    printf("\nReturn value when %c is passed to islower(): %d", c, islower(c));

    return 0;
}
