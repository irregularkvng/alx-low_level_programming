#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* *_strcat - function that concatenatess @dest to @src
* @dest: destination string
* @src: source string
* Return: destination string
*/


char *_strcat(char *dest, char *src)
{
	int str1 = 0;
	int str2 = 0;

	while (dest[str1++])
		str2++;
	for (str1 = 0; src[str1]; str1++)
		dest[str2++] = src[str1];
	return (dest);
}
