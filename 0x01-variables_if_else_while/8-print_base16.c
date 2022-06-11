#include <stdio.h>
/**
 * main- print base 16
 * return: 0 if succesful
 */
int main(void)
{
    int a;
    char b;
    for (a = 0;a < 10;a++){
        putchar(a);
        
    }
    for (b = 'a';b <= 'f';b++)
    {
            
        putchar(b);
    }
    putchar('\n');
    return (0);

}