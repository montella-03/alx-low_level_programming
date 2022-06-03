#include<stdio.h>

/*
*main- Entry point
*
*Description- code that print alphabet in lowercase and uppercase
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
    for(alpha=65; alpha< 90; alpha++)
    {
    putchar(alpha);
    }
    putchar('\n');
    return 0;
}