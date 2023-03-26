#include <stdio.h>
int main(void){
    long long int n, power2, c;
    printf("enter n: ");        //prompt the user to input n
    scanf("%lld", &n);        // read input and store to variable n
    power2 = 1;
    for (c = 0; c < n; c++){
        power2 *= 2;
        }
    printf("%d = %lld", n, power2);
}