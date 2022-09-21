#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print 0123456789 using putchar
 * Return: Alway 0 (Success)
 */
int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
		putchar('\n');
		return (0);
}
