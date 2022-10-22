#include <stdio.h>


/**
* main - Entry point
*
* Return: Always 0 (Success)
*/


int main(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";

	int length = sizeof(alphabets) / sizeof(alphabets[0]) - 1;

	int i = 0;

	while (i < length)
	{
		if (alphabets[i] == 'q' || alphabets[i] == 'e')
		{
			i++;
			continue;
		}

		putchar(alphabets[i]);

		i++;
	}

	putchar('\n');

	return (0);
}
