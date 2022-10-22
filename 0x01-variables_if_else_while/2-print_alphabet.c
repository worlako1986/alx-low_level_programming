#include <stdio.h>


/**
* main - Entry point
*
* Return: Always 0 (Success)
*/


/* The function print out alpabets */

int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	int length = sizeof(alphabet) / sizeof(alphabet[0]);

	int i = 0;

	while (i < length)
	{
		putchar(alphabet[i]);

		i++;
	}

	return (0);
}
