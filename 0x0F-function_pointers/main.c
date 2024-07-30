#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - prints the opcodes of the main function
 * @bytes: the number of bytes to print
 *
 * Description: This function prints the opcodes of the main function
 * in hexadecimal format, each byte represented by two characters.
 */
void print_opcodes(int bytes)
{
	unsigned char *ptr;
	int i;

	/* Get the address of the main function */
	ptr = (unsigned char *)&print_opcodes;

	for (i = 0; i < bytes; i++)
	{
	if (i > 0)
	{
	printf(" ");
	}
	printf("%02x", ptr[i]);
	}
	printf("\n");
}

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, or appropriate error code
 *
 * Description: This function checks the number of arguments and if the
 * number of bytes to print is valid. It then calls print_opcodes to
 * display the opcodes.
 */
int main(int argc, char *argv[])
{
	int bytes;

	if (argc != 2)
	{
	printf("Error\n");
	exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
	printf("Error\n");
	exit(2);
	}

	print_opcodes(bytes);

	return (0);
}

