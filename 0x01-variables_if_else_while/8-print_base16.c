#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints hexadecimal 0123456789abcdef, using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}

	for (c = 'a'; c <= 'f'; c++) 
	{
		putchar(c);
	}
		putchar('\n');
		return (0);
}

