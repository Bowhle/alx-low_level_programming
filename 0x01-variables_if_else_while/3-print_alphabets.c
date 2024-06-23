#include <stdio.h>

int main(void)
{
    char letter;

    // Print lowercase alphabet
    for (letter = 'a'; letter <= 'z'; letter++)
    {
        putchar(letter);
    }

    // Print uppercase alphabet
    for (letter = 'A'; letter <= 'Z'; letter++)
    {
        putchar(letter);
    }

    // Print a newline character at the end
    putchar('\n');

    return 0;
}


