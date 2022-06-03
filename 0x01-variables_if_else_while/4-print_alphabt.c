#include<stdio.h>

/*
*main- Entry point
*
*Description- code that print alphabet in lowercase except q ad e
*
*Return 0- Always (success)
*
*/

int main (void)
{
    char alpha='a';

    while (alpha< 'z')
    {
        if((alpha!='q' && alpha!='e'))
        {
            putchar(alpha);
        }
        alpha++;
    }
    putchar('\n');
    return 0;
}