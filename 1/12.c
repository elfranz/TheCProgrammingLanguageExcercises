// Exercise 1-12. Write a program that prints its input one word per line.
#include <stdio.h>

main()
{
    int c;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            putchar('\n');
            continue;
        }
        putchar(c);
    }
}