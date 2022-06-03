#include <stdio.h>

/**
* main - Prints alphabets in lowercas in reverse order
* Return: 0
**/

int main(void)
{
	char alpha = 122;

	while (alpha >= 97)
	{
		putchar(alpha);
		alpha--;
	}

	putchar('\n');

	return (0);
}
