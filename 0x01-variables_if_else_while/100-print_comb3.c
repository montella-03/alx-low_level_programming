#include<stdio.h>

/*
*main- Entry point
*
*Description- code that prints all possible different combinations of two digits
*
*Return 0- Always (success)
*
*/

int main (void)
{
    int i1, i2;

	for (i1 = 48; i1 <= 57; i1++)
	{
		for (i2 = 48; i2 <= 57; i2++)
		{
		putchar(i1);
		putchar(i2);

			if (!(i1 == 57 && i2 == 57))
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
    return 0;
}