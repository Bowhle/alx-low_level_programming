#include <stdio.h>

int main(void)
{
    char digit;

    for (digit = '0'; digit <= '9'; digit++)
    {
        putchar(digit);
    }
    
    putchar('\n');  // Print a newline character at the end
    
    return 0;
}

