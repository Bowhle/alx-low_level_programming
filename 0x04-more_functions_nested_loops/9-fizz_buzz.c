#include <stdio.h>

/**
 * main - func prints the numbers from 1 to 100, but for multiples of three
 * prints Fizz instead of the number and for multiples of five prints Buzz.
 * For numbers which are multiples of both three and five prints FizzBuzz.
 * Return: Always 0
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; i++)
	{
	if ((num % 3) == 0 && (num % 5) == 0)
	printf("FizzBuzz");
	
	else if ((num % 3) == 0)
	printf("Fizz");
	
	else if ((num % 5) == 0)
	printf("Buzz");
	
	else
	printf("%d", num);

	if (num == 100)
	continue;
	printf(" ");
	}
	printf("\n");
	return (0);
}
