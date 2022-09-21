#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints 0-9 separated with commas using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
		return (0);
}
