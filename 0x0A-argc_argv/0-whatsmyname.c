#include <stdlib.h>
#include <stdio.h>
/**
* main - function that prints iys name
* @argc: argument count
* @argv: arguement vector
* Return: always 0
*
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
