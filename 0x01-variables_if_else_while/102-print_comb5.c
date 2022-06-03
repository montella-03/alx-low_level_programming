#include<stdio.h>

/*
*main- Entry point
*
*Description- code that prints all possible different combinations of two digits 0-99
*
*Return 0- Always (success)
*
*/

int main (void)
{
    
	int i1, i2, i3, i4;

	for (i1 = 48; i1 <= 57; i1++)
	{
		for (i2 = 48; i2 <= 57; i2++)
		{
			for (i3 = i1; i3 <= 57; i3++)
			{
				if (i3 == i1)
				{
					i4 = i2 + 1;
				}
				else
				{
					i4 = 48;
				}

				for (i4 = i4; i4 <= 57; i4++)
				{
				putchar(i1);
				putchar(i2);
				putchar(' ');
				putchar(i3);
				putchar(i4);

					if (!(i1 == 57 && i2 == 56
					      && i3 == 57 && i4 == 57))
					{
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}