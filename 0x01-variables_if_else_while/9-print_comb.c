#include <stdio.h>
/**
 * main- print combiation of 
 * all single digits
 * return: 0 if succesful
 */
int main(void)
{
    int a;
    int b;
    for (a = 0;a < 10;a++){
        putchar(a);
        for (b = 0;b < 10;b++){
            
            putchar(b);
        }
    }
    putchar('\n');
    return (0);

}