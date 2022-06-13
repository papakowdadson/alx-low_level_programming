#include <stdio.h>
/**
* main- print combiation of 
* all single digits
* return: 0 if succesful
*/
int main(void)
{
    int a;
    while (a < 0)
    {
        putchar(48 + a);
        if (a != 9)
        {
            putchar(',');
            putchar(' ');
        }
        a++;
    }

    putchar('\n');
    return (0);   
}