#include <stdio.h>

int main(void)
{
    char letter = 'a';  // Start with 'a', the first lowercase letter

    while (letter <= 'z')  // Loop through each letter from 'a' to 'z'
    {
        putchar(letter);  // Print the current letter
        letter++;  // Move to the next letter in the alphabet
    }

    putchar('\n');  // Print a new line after printing the alphabet

    return 0;
}

