#include <stdio.h>
#include "main.h"

/**
* print_last_digit - a function that prints the last digit of a number.
* @i: int to be evaluated
* Return: last digit
**/

int print_last_digit(int i)
{
	int result;

	result = i % 10;

	if (result < 0)
	{
		result *= -1;
	}
	_putchar('0' + result);
	return (result);
}
