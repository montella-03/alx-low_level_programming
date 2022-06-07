#include "main.h"

/**
* _isalpha -  Checks for alphabet characters
* @c: int to be checked
* Return: 1, on success
**/

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	return (0);
}
