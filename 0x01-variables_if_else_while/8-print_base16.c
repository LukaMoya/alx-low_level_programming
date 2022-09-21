#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints hexadecimal 0123456789abcdef, using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = '0';

	int a_to_f = 'z';

	while (n <= '9') /*prints 0-9*/
	{
		putchar(n);
		n++;
	}
	while (a_to_f <= 'f') /*prints a-f to finish hexbase*/
	{
		putchar(a_to_f);
		a_to_f++;
	}
		putchar('\n');
		return (0);
}

