#include "main.h"

/**
* print_square - draws a sqaure in the terminal.
* @size: size of square
* Return: nothing
**/

void print_square(int size)
{
	if (size > 0)
	{
		int length, width;

		width = 0;

		while (width < size)
		{
			length = 0;
			while (length < size)
			{
				_putchar('#');
				length++;
			}
			_putchar('\n');
			width++;
		}
	}
	else
		_putchar('\n');
}
