#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main- print last digits  
* 
* return: 0 is successful
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    if (n > 5)
    {
        printf("Last digit of n is %d and is greater than 5", n);

    }
    if (n = 0)
    {
        printf("Last digit of n is %d and is 0", n);

    }
    if (n < 6 && n != 0)
    {
        printf("Last digit of n is %d and is less than 6 and not 0", n);

    }
	return (0);
}