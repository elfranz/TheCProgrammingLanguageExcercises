#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

/* celsius * 9/5 + 32 */
int main()
{
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    {
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32.0));
    }
    
}
