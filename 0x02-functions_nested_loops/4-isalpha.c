#include "main.h"

/**
 * _isalpha - function that checks for alphabets
 *
 * @c: parameter to be checked
 *
 * Return: 1 if is an alphabet
 * amd 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97  && c <= 122) || (c >= 65 && c <= 9))
	{
		return (1);
	}
	else
		return (0);
}
