#include <stdio.h>
#include "main.h"

/**
* print - prints all natural numbers from n to a given number
* @i: number to start count from
* Return: nothing
**/

void print_to_98(int i)
{
	if (i <= 98)
	{
		while (i < 98)
		{
			printf("%d, ", i);
			i++;
		}
	}
	else
		while (i > 98)
		{
			printf("%d, ", i);
			i--;
		}
	printf("%d\n", i);
}
