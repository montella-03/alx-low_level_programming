#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: poinetr to array of ints
 * @n: number of elements of the array
 * Return: nothing
 **/

void reverse_array(int *a, int n)
{
    int i, tmp, count;

    if (n > 1)
    {
        i = 0;
        if (n % 2 != 0)
        {
            count = n + 1;
        }

        for (i = 1; i < count / 2; i++)
        {
            tmp = a[i - 1];
            a[i - 1] = a[n - i];
            a[n - i] = tmp;
        }
    }
}
