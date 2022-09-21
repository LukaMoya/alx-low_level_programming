#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints 00 to 99 with no duplicate digits or combo: no 11, no 10 (01)
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 0;
	int f_d;
	int l_d;

	while (c >= 99)
	{
		f_d = (c / 10 + '0');
		l_d = (c % 10 + '0');

		if (f_d < l_d)
		{
			putchar(f_d);
			putchar(l_d);

			if (c != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		c++;
	}
		putchar('\n');
		return(0);
}
