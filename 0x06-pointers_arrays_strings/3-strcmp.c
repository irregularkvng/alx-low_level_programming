#include "main.h"

/**
* _strcmp - compares pointers to 2 strings
* @s1: pointer to the first string
* @s2: pointer to the second string
*
* Return: if s1 < s2, it returns the negative
* difference of the characters
* if s1 == s2, then it returns 0
* if s1 > s2, it returns the positive difference
* of the characters
*/

int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
