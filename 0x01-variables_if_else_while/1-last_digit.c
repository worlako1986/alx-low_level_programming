#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Return: success(0)
*/


int main(void)
{

	int n;
	int ld = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (abs(n) >= 10)
	{
		ld = (abs(n) % 10);
	} else
	{
		ld = n;
	}

	if (n < 0)
	{
		ld = -1 * ld;
	}

	if (ld < 6 && ld != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	} else if (ld > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	} else
	{
		printf("Last digit of %d is %d and is 0\n", n, ld);
	}
	return (0);

}
