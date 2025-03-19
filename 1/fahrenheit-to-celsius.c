#include <stdio.h>

/*
    this is a comment.
    print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300
    1 -17
    20 -6
    40 4
    60 15
    80 26
    100 37
    120 48
    140 60
    160 71
    180 82
    200 93
    220 104
    240 115
    260 126
    280 137
    300 148
*/
main ()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0; // lower limit of temperature scale
    upper = 300; // upper limit
    step = 20; // step size

    fahr = lower;
    printf("FAHR\tCELSIUS\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0) ;
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}