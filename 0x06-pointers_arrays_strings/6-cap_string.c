#include "main.h"

/**
 * *cap_string - Write a function that capitalizes all words of a string.
 * @entry: input string
 * Return: string capitalized
 */
char *cap_string(char *entry)
{
	int index;

	while (entry[index])
	{
		while (!(entry[index] >= 'a' && entry[index] <= 'z'))
			index++;
		if (entry[index - 1] == ' ' ||
		    entry[index - 1] ==	'\t' ||
		    entry[index - 1] == '\n' ||
		    entry[index - 1] == ',' ||
		    entry[index - 1] == ';' ||
		    entry[index - 1] == '.' ||
		    entry[index - 1] == '!' ||
		    entry[index - 1] == '?' ||
		    entry[index - 1] == '"' ||
		    entry[index - 1] == '(' ||
		    entry[index - 1] == ')' ||
		    entry[index - 1] == '{' ||
		    entry[index - 1] == '}' ||
		    index == 0)
		       entry[index] -= 32;

		index++;
	}

	return (entry);
}
