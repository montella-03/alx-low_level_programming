#include <stdio.h>

/**
* main - Finds and prints the sum of the even-valued terms
* Return: 0
**/

int main(void)
{
	long num1, num2, limit, fib_number, sum;

	num1 = 0;
	num2 = 1;
	fib_number = 0;
	limit = 4000000;
	sum = 0;

	while (fib_number < limit)
	{
		fib_number = num1 + num2;
		if (fib_number % 2 == 0)
		{
			sum += fib_number;
		}
		num1 = num2;
		num2 = fib_number;
	}
	printf("%ld\n", sum);
	return (0);
}
