// Exercise 1-8. Write a program to count blanks, tabs, and newlines.
#include <stdio.h>

int main()
{
    int c, nl, b, t;

    nl = 0;
    b = 0;
    t = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n')
        {
            ++nl;
        }
        if (c == ' ')
        {
            ++b;
        }
        if (c == '\t')
        {
            ++t;
        }
    }
    printf("new lines: %d, blanks: %d, tabs: %d\n", nl,b,t);
}
