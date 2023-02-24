#include "main.h"

/**
 * more_numbers - prints 0 to 14 ten times
 *
 * Return: always 0 (success)
 */

void more_numbers(void)
{
	char n, o;
	int a  = 0;

	while (a < 10)
	{
		for (n = 0 ; n <= 14 ; n++)
		{
			o = n;
			if (n > 9)
			{
				_putchar('1');
				o = n % 10;
			}

			_putchar('0' + o);
		}

		_putchar('\n');
		a++;
	}
}
