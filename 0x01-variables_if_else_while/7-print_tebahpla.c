#include <stdio.h>


/**
* main - Entry point
*
* Return: Always 0 (Success)
*/


int main(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";

	int i = 25;

	while (i >= 0)
	{
		putchar(alphabets[i]);

		i--;

	}

	putchar('\n');

	return (0);

}
