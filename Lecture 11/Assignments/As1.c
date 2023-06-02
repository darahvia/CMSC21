#include <stdio.h>
#include <ctype.h>
#include <stdbool.h> 
#define SIZE 26

void scan_word(int occurences[SIZE]);
bool is_anagram(int occurences1[SIZE], int occurences2[SIZE]);

int main(void){

    int i,
        occurences1[SIZE] = {0},
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

void scan_word(int occurences[SIZE]){
    char c;
    while ((c = getchar()) != '\n'){    //loop that repeatedly reads characters from the standard input until a newline character 
        if (isalpha(c)){
            occurences[toupper(c) - 'A']++;     //index of the letter in the alphabet and increments it
        }
    }
}

bool is_anagram (int occurences1[SIZE], int occurences2[SIZE]){
    int i;
    for (i = 0; i < SIZE; i++) {
        if (occurences1[i] != occurences2[i]) {     //check if there is at least one instance where the occurence of a letter is not the same
            return false;
        }
    }
    return true;
}

