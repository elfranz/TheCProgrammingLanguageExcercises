// Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is
// easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.
#include <stdio.h>

#define MAXWORDS 50 // have to set a limit since we dont know how many words we will have

int main()
{
    int c, counter, lastc, maxchars;
    int wordcount[MAXWORDS];
    counter = maxchars = 0;

    // set array to the max length so I can later tell when we stopped adding words
    for (int i = 0; i < MAXWORDS; i++)
    {
        wordcount[i] = 0;
    }

    // count characters for each word in array
    while ((c = getchar()) != EOF)
    {
        if (' ' == c || '\n' == c || '\t' == c)
        {
            if (lastc == c)
            {
                continue;
            }
            if (wordcount[counter] > maxchars)
            {
                maxchars = wordcount[counter];
            }
            ++counter;
            continue;
        }
        lastc = c;
        ++wordcount[counter];
    }

    // make histogram
    for (int i = maxchars; i > 0; i--)
    {
        for (int j = 0; j < counter; j++)
        {
            if (wordcount[j] < i)
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
