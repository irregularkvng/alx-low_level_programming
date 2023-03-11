#include <stdlib.h>
#include <stdio.h>

/**
 * main - function that prints all arguement it receives
 * @argc: arguement count
 * @argv: argument array
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}

	return (0);
}
