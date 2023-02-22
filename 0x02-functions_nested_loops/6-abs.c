#include "main.h"
#include <stdio.h>

/**
 * _abs - checks for  absolute value
 * @n: int to be checked  as absolute
 * Return: always n
 **/

int _abs(int n)
{
	if (n < 0)
		n = -(n);
	else if (n >= 0)
		n = n;
	return (n);
}
