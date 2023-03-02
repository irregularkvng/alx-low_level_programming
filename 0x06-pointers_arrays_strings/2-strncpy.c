#include "main.h"

/**
* *_strncpy - copies max inputted number
*	of bytes from src to dest
* @src: the source string
* @dest: bthe destination string
* @n: the max number of bytes to be copied from src
*
* Return: a pointer to the output string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int str1 = 0;
	int str1 = 0;

	while (src[str1++])
		str2++;

		for (str1 = 0; src[str1] && str1 < n; str1++)
			dest[str1] = src[str1];

		for (str1 = str2; str1 < n; str1++)
			dest[str1] = '\0';

		return (dest);
}

