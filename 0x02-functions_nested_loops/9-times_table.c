#include "main.h"

/**
* times_table - function that prints the 9 times table, starting with 0.
* Return: nothing
**/

void times_table(void)
{
	int number, count, num1, num2, product;

	count = 0;

	while (count <= 9)
	{
		number = 0;
		while (number <= 9)
		{
			product = count * number;

			if (product < 10)
			{
				if (number > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(product + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				num2 = product % 10;
				num1 = product / 10;
				_putchar(num1 + '0');
				_putchar(num2 + '0');
			}
			number++;
		}
		_putchar('\n');
		count++;
	}
}