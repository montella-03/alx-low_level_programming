#include "main.h"

/**
* print_times_table - prints the n times table, starting with 0.
* @n: the size of table to print to, max 15
* Return: nothing
**/

void print_times_table(int n)
{
	int number, count, product;

	count = 0;
	if (n >= 0 && n <= 15)
	{
		while (count <= n)
		{
			number = 0;
			while (number <= n)
			{
				product = count * number;
				if (product / 100 == 0 && number != 0)
				{
					_putchar(' ');
					if (product % 100 / 10 == 0)
					{
						_putchar(' ');
					}
					else
						_putchar(product % 100 / 10 +
							 '0');
				}
				else if (product / 100 != 0)
				{
					_putchar(product / 100 + '0');
					_putchar(product % 100 / 10 +
						 '0');
				}
				_putchar(product % 10 + '0');
				if (number != n)
				{
					_putchar(',');
					_putchar(' ');
				}
				number++;
			}
			_putchar('\n');
			count++;
		}
	}
}
