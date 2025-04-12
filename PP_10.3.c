// Find the Longest Word in a given sentence. 
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void findLongestWord(const char *sentence) {
    int maxLength = 0, currentLength = 0;
    const char *longestWord = NULL, *currentWord = NULL;

    for (const char *ptr = sentence; ; ++ptr) {
        if (isalpha(*ptr)) {
            if (currentLength == 0) {
                currentWord = ptr;
            }
            currentLength++;
        } else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
                longestWord = currentWord;
            }
            currentLength = 0;
        }
        if (*ptr == '\0') {
            break;
        }
    }

    if (longestWord) {
        printf("Longest word: ");
        for (int i = 0; i < maxLength; i++) {
            putchar(longestWord[i]);
        }
        printf("\nLength: %d\n", maxLength);
    } else {
        printf("No words found in the sentence.\n");
    }
}

int main() {
    char sentence[256];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0'; // Remove trailing newline
    findLongestWord(sentence);
    return 0;
}