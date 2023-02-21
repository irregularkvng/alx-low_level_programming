#include <unistd.h>

/**
* _putchar - it writes the character c to stout
* &c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and the erroneous is set appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c,1));
}
