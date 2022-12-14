#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints 00 to 99 with no duplicate digits or combo: no 11, no 10 (01)
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ones;
	int tens;

	for (tens = '0'; tens <= '9'; tens++) /*Increment tens*/
	{
		for (ones = (tens + 1); ones <= '9'; ones++) /*ones's ten+1*/
		{
			putchar(tens);
			putchar(ones);

			if (tens != '8' || ones != '9') /*prints commas*/
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
