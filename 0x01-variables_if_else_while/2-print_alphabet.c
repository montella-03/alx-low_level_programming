#include<stdio.h>

/*
*main- Entry point
*
*Description- code that print alphabet in lowercase
*
*Return 0- Always (success)
*
*/

int main (void)
{
    char alpha;
    for(alpha=97; alpha< 122; alpha++)
    {
    putchar(alpha);
    }
    putchar('\n');
    return 0;
}