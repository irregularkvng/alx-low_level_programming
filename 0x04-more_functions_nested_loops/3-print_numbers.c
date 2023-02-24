#include "main.h"

/**
* print_numbers - print numbers from 0 to 9 followed by a new line
*
* Return: Always 0 (success)
*/

void print_numbers(void)
{
	int num;

	num = 0;

	while (num <= 9)
	{
		_putchar(num  + '0');
		num++;
	}
		_putchar('\n');
}
