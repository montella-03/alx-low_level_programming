#include<stdio.h>

/*
*main- Entry point
*
*Description- code that prints all possible different combinations of three digits
*
*Return 0- Always (success)
*
*/

int main (void)
{
    int i1, i2, i3;

	for (i1 = 48; i1 <= 57; i1++)
	{
		for (i2 = 48; i2 <= 57; i2++)
        {
            for (i3 =48; i3<= 57; i3++)
        
		    {
			putchar(i1);
			putchar(i2);
            putchar(i3);

			    if (!(i1 == 57 && i2 == 57 && i3 == 57))
			    {
				putchar(',');
				putchar(' ');
			    }
            }
		}
	}
	putchar('\n');
    return 0;
}