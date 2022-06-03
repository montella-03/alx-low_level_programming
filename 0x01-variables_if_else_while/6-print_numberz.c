#include<stdio.h>

/*
*main- Entry point
*
*Description- code that print single digit numbers
*
*Return 0- Always (success)
*
*/

int main ()
{
    int i;
    for(i=48; i<58; i++)
    {
        putchar(i);
    }
    putchar('\n');
    return 0;
}