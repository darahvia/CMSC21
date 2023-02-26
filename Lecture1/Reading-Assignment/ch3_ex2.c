#include <stdio.h>

int main (void)
{
    // declares variables i and x as int and float
    int i;
    float x;

    // assigns values to the variables
    i = 40;
    x = 839.21f;

    // prints with the different formats of i and x
    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);
}