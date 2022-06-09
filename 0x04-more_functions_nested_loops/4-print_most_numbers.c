#include "main.h"

/**
* print_numbers - prints the numbers, from 0 to 9
* Return: nothing
**/

void print_most_numbers(void)
{
	char number;

	for (number = '0'; number <= '9'; number++)
	{
		if (!(number == '2' || number == '4'))
		{
			_putchar(number);
		}
	}
	_putchar('\n');
}
