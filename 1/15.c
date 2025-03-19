#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

double fahr_to_celsius(int fahr);

int main()
{
    int fahr;
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    {
        printf("%3d %6.1f\n", fahr, fahr_to_celsius(fahr));
    }
}

double fahr_to_celsius(int fahr)
{
    return ((5.0/9.0) * (fahr-32.0));
}
