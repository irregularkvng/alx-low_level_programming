#include "main.h"

/**
 * _strlen(char - returns the length of a string
 * @s: char to check for
 * Return: 0
 *
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
