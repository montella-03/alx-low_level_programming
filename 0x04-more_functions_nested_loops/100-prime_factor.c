#include <stdio.h>

/**
* main - finds and prints the largest prime factor of the number 612852475143
* Return: 0
**/

int main(void)
{
	long int number, test_number, least_factor;

	number = 2;
	least_factor = 2;
	test_number = 612852475143;

	while (test_number > number)
	{
		if (test_number % number == 0)
		{
			least_factor = 2;
			test_number = test_number / number;
			number = number * number;
		}
		else
		{
			number++;
		}
	}
	least_factor = number;
	printf("%ld\n", least_factor);
	return (0);
}
