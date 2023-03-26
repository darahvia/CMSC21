#include <stdio.h>

int main(void){
    int i;
    i = 1;
    while (i <= 129) {
        printf("%d ", i);
        i *= 2;
    }
    return 0;
}