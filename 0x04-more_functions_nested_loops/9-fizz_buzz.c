#include <stdio.h>
#include "main.h"

/**
 * fizz_buzz - prints the numbers from 1 to 100, but for multiples of three
 * prints Fizz instead of the number and for multiples of five prints Buzz.
 * For numbers which are multiples of both three and five prints FizzBuzz.
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
	if ((i % 3) == 0 && (i % 5) == 0)
	printf("FizzBuzz");
	
	else if ((i % 3) == 0)
	printf("Fizz");
	else if ((i % 5) == 0)
	printf("Buzz");
	else
	printf("%d", i);

	if (1 != 100)
	continue;
	printf(" ");
	}
	printf("\n");
	return (0);
}
