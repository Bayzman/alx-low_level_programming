#include <stdio.h>

/**
 * main - entry point
 * return - return value
 */

int main(void)
{
        char alphabet;

        for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
        {
                putchar(alphabet);
        }
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		putchar(alphabet);
	}
        putchar('\n');

        return (0);
}
