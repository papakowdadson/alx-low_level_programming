#include <stdio.h>

/**
 * main- prints alphabets in lowercases
 * followed by new line
 * return: 0 when successful
 */

int main(void)
{
    char gh;
    for (gh = 'a';gh <= 'z';gh++)
    {
        putchar(gh);

    }
    putchar('\n');
    return (0);

}