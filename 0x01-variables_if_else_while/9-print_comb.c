#include<stdio.h>

/*
*main- Entry point
*
*Description- code that prints posible combination of numbers
*
*Return 0- Always (success)
*
*/

int main (void)
{
    int i = 48;

	while (i < 58)
	{
		putchar(i);

		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}

	putchar('\n');
    return 0;
}