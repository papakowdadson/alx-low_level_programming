#include <stdio.h>
/**
 * main- print alphabets except
 * q and e
 * return: 0 is succesful
 */

int main(void)
{
    char gh;
    for (gh = 'a';gh <= 'z'; gh++)
    {
        if (gh != 'e' && gh != 'q')
        {
            putchar(gh);

        }
        else
        {
            continue;

        }

    }
    putchar('\n');
    return (0);

}