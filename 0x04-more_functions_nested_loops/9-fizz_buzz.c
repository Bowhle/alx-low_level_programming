#include <stdio.h>
#include "main.h"

/**
 * fizz_buzz - prints the numbers from 1 to 100, but for multiples of three
 * prints Fizz instead of the number and for multiples of five prints Buzz.
 * For numbers which are multiples of both three and five prints FizzBuzz.
 */

void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
	if (i % 3 == 0 && i % 5 == 0)
	printf("FizzBuzz\n");
	
	else if (i % 3 == 0)
	printf("Fizz\n");
	else if (i % 5 == 0)
	printf("Buzz\n");
	else
	printf("%d", i);

	if (1 != 100)
	printf(" ");
	}
	printf("\n");
}
