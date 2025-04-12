// Write a program to extract and print only vowels from a sentence. 
#include <stdio.h>
#include <ctype.h>

int main() {
    char sentence[100], vowels[100];
    int i, j = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (i = 0; sentence[i] != '\0'; i++) {
        char ch = tolower(sentence[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels[j++] = sentence[i];
        }
    }
    vowels[j] = '\0';

    printf("Vowels in the sentence: %s\n", vowels);

    return 0;
}