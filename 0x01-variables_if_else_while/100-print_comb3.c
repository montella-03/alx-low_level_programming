#include <stdio.h>

/**
* main - Prints numbers from 0 to 99
* Return: 0
**/

int main(void)
{
	int i1, i2;

	for (i1 = 48; i1 <= 57; i1++)
	{
		for (i2 = i1+1; i2 <= 57; i2++)
		{
			putchar(i1);
			putchar(i2);

			if ((i1 != 56 && i2 != 57))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
