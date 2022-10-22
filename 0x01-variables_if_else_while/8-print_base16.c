#include <stdio.h>


/**
* main - Entry point
*
* Return: Always 0 (Success)
*/


int main(void)
{
	char base16[] = "0123456789abcdef";

	int length = (sizeof(base16) / sizeof(base16[0])) - 1;

	int i = 0;

	while (i < length)
	{
		putchar(base16[i]);

		i++;

	}

	putchar('\n');

	return (0);
}
