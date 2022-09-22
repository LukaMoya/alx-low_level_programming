#include <main.h>

/**
 * _strcat - concatenates the string pointed to by @src to
 * the end of the string pointed to by @dest
 * @dest: String that will be appended
 * @src: String to be concatenated upon
 *
 * Return: returns pointer to @dest
 */

char *_strcat(char *dest, char *src)
{
	int x, y;

	x = 0;
	y = 0;
	while (dest[x] != '\0')
		x++;

	while (src[y]) != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest [x] = '\0';

	return (dest);
}
