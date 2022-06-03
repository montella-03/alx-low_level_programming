#include<stdio.h>

/*
*main- Entry point
*
*Description- code that prints hexadecimal numbers
*
*Return 0- Always (success)
*
*/

int main ()
{
    int i;
	char alpha;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}

	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}

	putchar('\n');

    return 0;
}