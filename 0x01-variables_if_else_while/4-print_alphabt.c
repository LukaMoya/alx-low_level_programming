#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print lowercase alphabet but remove 'q' and 'e'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if ((alpha != 'q') && (alpha != 'e'))
		{
			putchar(alpha);
		}
		alpha++;
	}
	putchar('\n');
	return (0);
}
