#include "main.h"

/**
* reverse_array - Reverses the content of an array.
* @a: The array of integers to be reversed.
* @n: The number of elements in the array.
*/

void reverse_array(int *a, int n)
{
	int tmp, str1;

	for (str1 = n - 1; str1 >= n / 2; str1--)
	{
		tmp = a[n - 1 - str1];
		a[n - 1 - str1] = a[str1];
		a[str1] = tmp;
	}
}
