#include <stdio.h>

/**
* main - Finds and prints first 50 fibonacci numbers
* Return: 0
**/

int main(void)
{
	long i1, i2, fib_numbers;
	int count;

	i1 = 0;
	i2 = 1;
	count = 0;

	while (count < 50)
	{
		fib_numbers = i1 + i2;
		i1 = i2;
		i2 = fib_numbers;

		if (count != 49)
		{
			printf("%ld, ", fib_numbers);
		}
		else
			printf("%ld\n", fib_numbers);
		count++;
	}
	return (0);
}