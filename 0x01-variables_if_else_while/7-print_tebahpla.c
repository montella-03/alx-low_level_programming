#include<stdio.h>

/*
*main- Entry point
*
*Description- code that prints alphabet in reverse
*
*Return 0- Always (success)
*
*/

int main ()
{
    char alpha= 122;

	while (alpha >= 97)
	{
	putchar(alpha);
	alpha--;
	}

	putchar('\n');

    return 0;
}