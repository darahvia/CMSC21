#include <stdio.h>
int main(void){
    long long int n, power2, c;
    printf("enter n: ");        //prompt the user to input n
    scanf("%lld", &n);        // read input and store to variable n

    printf("TABLE OF POWERS OF TWO\n");
    printf(" n   2 to the n\n");
    printf("--- -------------\n");
    // loop n times to calculate the power of 2]
    power2 = 1;     
    for (c = 0; c <= n; c++){
        printf(" %-9d%lld\n", c, power2);     //print the result 
        power2 *= 2;
    }
}

