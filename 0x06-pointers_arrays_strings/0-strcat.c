#include "main.h"

/**
 * *_strcat - Write a function that concatenates two strings.
 *
 * @dest: Output dest
 * @src: Input source
 *
 * Return: Returns to dest that concatenatesbtwo strings
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
