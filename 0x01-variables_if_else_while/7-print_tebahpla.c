#include <stdio.h>
/**
* main- prints reverse alphabet
* retun: 0 if succesful
*/

int main(void)
{
    char gh;
    for (gh = 'z'; gh >= 'a'; gh--)
    {
        putchar(gh);

    }
    putchar('\n');
    return (0);

}