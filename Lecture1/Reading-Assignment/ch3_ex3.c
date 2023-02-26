#include <stdio.h>

int main(void)
{
    // declare variables for the numerator and denominator, and for the sum
    int num1, denom1, num2, denom2, result_num, result_denom;

    // lines with the scan f function asks the user to input and 
    // then it is stored to their respective variables
    printf ("Enter first fraction: ");
    scanf("%d/%d", &num1, &denom1);

    printf ("Enter second fraction: ");
    scanf("%d/%d", &num2, &denom2);

    // calculate the numerator and denominator of the sum of the two fractions
    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;

    // printing of the result
    printf("The sum is %d/%d\n", result_num, result_denom);
}