#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
* main - Entry point
*
* Return: always 0 (Success)
*/


/* betty style doc for functioon main goes there */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive", n);

	} else if (n < 0)
	{

		printf("%d is negative", n);

	} else if (n == 0)
	{

		printf("%d is zero", n);

	}

	return (0);

}