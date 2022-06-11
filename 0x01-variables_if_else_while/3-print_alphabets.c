#include <stdio.h>

/**
 * main- print upper and lower case
 * alphbets
 * return: 0 when successful
 */

int main(void)
{
    char gh;
    for (gh = 'a';gh <= 'z';gh++)
    {
        putchar(gh);

    }
    for (gh = 'A';gh <= 'Z';gh++)
    {
        putchar(gh);

    }
    putchar('\n');
    return (0);

}