#include "main.h"

/**
* print- Prints lowercase alphabets 10 times
* Return: nothing
**/

void print_alphabet_x10(void)
{
	int i, alphabet;

	for (i = 0; i < 10; i++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}