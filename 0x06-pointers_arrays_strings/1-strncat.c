#include "main.h"

/**
* *_strncat - concats two strings using
*	inputted number of bytes from src
* @dest: the string to be appended upon
* @src: the string to append
* @n: the number of bytes from src to be appended to dest
* Return: a pointer to the output string
*/

char *_strncat(char *dest, char *src, int n)
{
	int str1 = 0;
	int str2 = 0;

	while (dest[str1++])
		str2++;
	for (str1 = 0; src[str1] && str1 < n; str1++)
		dest[str2++] = src[str1];
	return (dest);
}
