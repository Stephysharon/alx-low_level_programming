#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line.
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		_putchar('0' + num);
		num++;
	}
	_putchar('\n');
}
