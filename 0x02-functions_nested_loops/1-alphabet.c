#include "main.h"

/**
 * main- prints alphapets in lowercase
 * Description- void doesnt return
 * Return- nothing
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
