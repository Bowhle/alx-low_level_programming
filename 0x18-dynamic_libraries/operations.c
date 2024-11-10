#include "operations.h"

/**
 * add - adds two integers.
 * @a: first integer.
 * @b: second integer.
 *
 * Return: the result of a + b.
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtracts two integers.
 * @a: first integer.
 * @b: second integer.
 *
 * Return: the result of a - b.
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiplies two integers.
 * @a: first integer.
 * @b: second integer.
 *
 * Return: the result of a * b.
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divides two integers.
 * @a: first integer.
 * @b: second integer.
 *
 * Return: the result of a / b. If b is 0, return 0.
 */
int div(int a, int b)
{
	if (b == 0)
		return (0); /* Avoid division by zero */
	return (a / b);
}

/**
 * mod - finds the remainder of a division.
 * @a: first integer.
 * @b: second integer.
 *
 * Return: the remainder of a % b. If b is 0, return 0.
 */
int mod(int a, int b)
{
	if (b == 0)
		return (0); /* Avoid division by zero */
	return (a % b);
}
