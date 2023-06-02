#include <stdio.h>
#include <ctype.h>
#include <stdbool.h> 
#define SIZE 26

void scan_word(int *occurences);
bool is_anagram(int *occurences1, int *occurences2);

int main(void){

    int occurences1[SIZE] = {0},
        occurences2[SIZE] = {0};

    printf("Enter first word: ");
    scan_word(occurences1);
    printf("Enter second word: ");
    scan_word(occurences2);
    if (is_anagram(occurences1, occurences2)){
        printf("The words are anagrams.\n");
    }
    else{
        printf("The words are not anagrams.\n");
    }
}

void scan_word(int *occurences){
    char c;
    while ((c = getchar()) != '\n'){
        if (isalpha(c)){
            occurences[toupper(c) - 'A']++;  
        }
    }
}

bool is_anagram (int *occurences1, int *occurences2){
    int i;
    for (i = 0; i < SIZE; i++) {
        if (*occurences1++ != *occurences2++) {
            return false;
        }
    }
    return true;
}