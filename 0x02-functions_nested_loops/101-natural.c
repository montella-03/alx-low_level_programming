#include <stdio.h>

/**
* main - computes and prints the sum of all the multiples of 3 or 5, below 1024.
* Return: 0
**/

int main(void)
{
	int number, brake, result;

	brake = 1024;
	number = 5;
	result = 3;

	while (number < brake)
	{
		if (number % 3 == 0 || number % 5 == 0)
		{
			result += number;
		}
		number++;
	}

	printf("%d\n", result);
	return (0);
}