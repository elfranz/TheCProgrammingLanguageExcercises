/* Exercise 1-9. Write a program to copy
its input to its output,
replacing each string of one or
more blanks by a single blank. */
#include <stdio.h>

int main()
{
    int c, lc, t;

    while ((c = getchar()) != EOF) {
        if (c != ' ')
        {
            putchar(c);
        }
        if (c == ' ')
        {
            if (c != lc)
            {
                putchar(c);
            }
        }
        lc = c;
    }
}