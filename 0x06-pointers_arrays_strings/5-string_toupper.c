#include "main.h"

/**
* string_toupper - Changes all lowercase letters
* of a string to uppercase.
* @str: The string to be changed to uppercase.
*
* Return: A pointer to the changed string.
*/

char *string_toupper(char *str)
{
	int str1 = 0;
		while (str[str1])
		{
			if (str[str1] >= 'a' && str[str1] <= 'z')
				str[str1] -= 32;

			str1++;
		}

		return (str);
}
