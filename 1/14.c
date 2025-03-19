// Exercise 1-14. Write a program to print a histogram of the
// frequencies of different characters
// in its input.
#include <stdio.h>

// possible characters, this is gonna be the length of our array that will
// contain the count of each char since we can interpret the position in array
// as a char
#define ASCIILEN 128

int main()
{
    int c;
    int chars[ASCIILEN];
    int maxcount = 0;

    for (int i = 0; i < ASCIILEN; i++)
    {
        chars[i] = 0;
    }
    while ((c = getchar()) != EOF)
    {
        ++chars[c];
        if (chars[c] > maxcount)
        {
            maxcount = chars[c];
        }
    }
    for (int i = maxcount; i > 0; i--)
    {
        for (int j = 0; j < ASCIILEN; j++)
        {
            if (chars[j] < i)
            {
                putchar(' ');
            }
            else
            {
                putchar('|');
            }
        }
        putchar('\n');
    }
}
// program works as intended but gotta figure out a way to print
// the characters below the histogram aligned