#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/*
* *_strcat - the function that concats two strings
* @s1: destination string
* @s2: source string
* Return: destination string
*/


char *_strcat(char *dest, char *src)
{
	char *ptr = dest;
		while (*ptr != '\0') 
		{
			ptr++;
		}
    		while (*src != '\0') {
        *ptr = *src;
        ptr++;
        src++;
    }
    *ptr = '\0';
    return dest;
}


int main() {
    char s1[100] = "Hello, ";
    char s2[] = "world!";
    
    *_strcat(s1, s2);
    
    printf("Concatenated string: %s", s1);
    return 0;
}

