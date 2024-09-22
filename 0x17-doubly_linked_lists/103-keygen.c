#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * generate_first_char - Generates the first character of the password.
 * @username: The username provided.
 *
 * Return: The first character of the password.
 */
char generate_first_char(const char *username)
{
	int len = strlen(username);
	int tmp = (len ^ 59) & 63;
	char *codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	return codex[tmp];
}

/**
 * generate_second_char - Generates the second character of the password.
 * @username: The username provided.
 *
 * Return: The second character of the password.
 */
char generate_second_char(const char *username)
{
	int len = strlen(username);
	int tmp = 0;
	char *codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	for (int i = 0; i < len; i++)
		tmp += username[i];
	return codex[(tmp ^ 79) & 63];
}

/**
 * generate_third_char - Generates the third character of the password.
 * @username: The username provided.
 *
 * Return: The third character of the password.
 */
char generate_third_char(const char *username)
{
	int len = strlen(username);
	int tmp = 1;
	char *codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	for (int i = 0; i < len; i++)
		tmp *= username[i];
	return codex[(tmp ^ 85) & 63];
}

/**
 * generate_fourth_char - Generates the fourth character of the password.
 * @username: The username provided.
 *
 * Return: The fourth character of the password.
 */
char generate_fourth_char(const char *username)
{
	int len = strlen(username);
	int tmp = 0;
	for (int i = 0; i < len; i++)
	{
		if (username[i] > tmp)
			tmp = username[i];
	}
	srand(tmp ^ 14);
	char *codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	return codex[rand() & 63];
}

/**
 * generate_fifth_char - Generates the fifth character of the password.
 * @username: The username provided.
 *
 * Return: The fifth character of the password.
 */
char generate_fifth_char(const char *username)
{
	int len = strlen(username);
	int tmp = 0;
	char *codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	for (int i = 0; i < len; i++)
		tmp += (username[i] * username[i]);
	return codex[(tmp ^ 239) & 63];
}

/**
 * generate_sixth_char - Generates the sixth character of the password.
 * @username: The username provided.
 *
 * Return: The sixth character of the password.
 */
char generate_sixth_char(const char *username)
{
	int tmp = 0;
	char *codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	for (int i = 0; i < username[0]; i++)
		tmp = rand();
	return codex[(tmp ^ 229) & 63];
}

/**
 * main - Generates and prints passwords for the crackme5 executable.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char password[7];

	if (argc != 2) /* Check for the correct number of arguments */
	{
		fprintf(stderr, "Usage: %s username\n", argv[0]);
		return (1);
	}

	password[0] = generate_first_char(argv[1]);
	password[1] = generate_second_char(argv[1]);
	password[2] = generate_third_char(argv[1]);
	password[3] = generate_fourth_char(argv[1]);
	password[4] = generate_fifth_char(argv[1]);
	password[5] = generate_sixth_char(argv[1]);
	password[6] = '\0';

	printf("%s", password);
	return (0);
}
