#include <stdio.h>


/**
* main - Entry point
*
* Return: Alway 0 (Success)
*/



int main(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int length = (sizeof(alphabets) / sizeof(alphabets[0])) - 1;

	int i = 0;

	while (i < length)
	{
		putchar(alphabets[i]);

		i++;

	}

	putchar('\n');

	return (0);
}
