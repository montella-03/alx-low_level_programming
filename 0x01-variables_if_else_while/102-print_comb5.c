#include <stdio.h>

/**
* main - Print possible combinations of two two-digit numbers
* Return: 0
**/

int main(void)
{
	int k1, k2, k3, k4;

	for (k1 = 48; k1 <= 57; k1++)
	{
		for (k2 = 48; k2 <= 57; k2++)
		{
			for (k3 = k1; k3 <= 57; k3++)
			{
				if (k3 == k1)
				{
					k4 = k2 + 1;
				}
				else
				{
					k4 = 48;
				}

				for (k4 = k4; k4 <= 57; k4++)
				{
					putchar(k1);
					putchar(k2);
					putchar(' ');
					putchar(k3);
					putchar(k4);

					if (!(k1 == 57 && k2 == 56
					      && k3 == 57 && k4 == 57))
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
