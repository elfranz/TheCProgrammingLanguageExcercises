#include <stdio.h>

#define MAXLINE 1000

int main()
{
    int c;
    int i = 0;
    char line[MAXLINE];

    while ((c = getchar()) != EOF && i < MAXLINE)
    {
        line[i] = c;
        ++i;
    }
    


}
