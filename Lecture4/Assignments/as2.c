#include <stdio.h>

int main(void){
    int i;
    i = 10;
    while (i < 10) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    i = 10;
    for(;i < 10;){
        printf("%d ", i);
        i++;
    }
    printf("\n");

    i = 10;
    do {
        printf("%d ", i);
        i++;
    } while(i < 10);
}