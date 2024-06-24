#include <stdio.h>

/*
 * main - Entry point of the program
 * 
 * This function prints the lowercase alphabet followed by the uppercase alphabet,
 * excluding any characters specified in the instructions.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char i;

	/* Print lowercase alphabet */
	for (i = 'a'; i <= 'z'; i++)
	putchar(i);

	/* Print uppercase alphabet */
	for (i = 'A'; i <= 'Z'; i++)
	putchar(i);

	/* Print a newline character at the end */
	putchar('\n');
	return (0);
}
