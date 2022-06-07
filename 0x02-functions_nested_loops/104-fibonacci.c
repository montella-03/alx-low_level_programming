#include <stdio.h>

/**
* main - Finds and prints first 98 fibonacci numbers
* Return: 0
**/

int main(void)
{
	int count1, count2;
	long int num1, num2, divide_1, divide_2, fib_number, fib_divide;

	divide_2 = 1;
	fib_number = 2;
	num1 = 0;
	num2 = 0;
	count1 = 2;
	count2 = 0;

	printf("%li, %li, ", divide_2, fib_number);
	while (count1 < 98)
	{
		fib_divide = divide_2 + fib_number;
		if ((fib_divide / 10000000) > 0)
		{
			count2 = fib_divide / 10000000;
			fib_divide = fib_divide % 10000000;
		}

		divide_1 = num1 + num2 + count2;

		if (divide_1 > 0)
			printf("%li%07li", divide_1, fib_divide);
		else
			printf("%li", fib_divide);

		num1 = num2;
		num2 = divide_1;
		divide_2 = fib_number;
		fib_number = fib_divide;
		count2 = 0;

		if (count1 < 97)
			printf(", ");

		count1++;
	}
	printf("\n");
	return (0);
}