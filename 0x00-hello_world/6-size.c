#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int main(void)
{

	printf("Size of a char: %2d byte(s)", sizeof(char));
	printf("Size of a int: %2d byte(s)", sizeof(int));
	printf("Size of a long int: %2d byte(s)", sizeof(long int));
	printf("Size of a long long int: %2d byte(s)", sizeof(long long int));
	printf("Size of a float: %2d byte(s)", sizeof(float));

	return (0);

}
