#include "main.h"

/**
* print_numbers - prints the numbers, from 0 to 9
* Return: nothing
**/

void print_numbers(void)
{
	char number;

	for (number = '0'; number <= '9'; number++)
	{
		_putchar(number);
	}
	_putchar('\n');
}
