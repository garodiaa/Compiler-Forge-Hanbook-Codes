//  Write a program to count and show top 3 max frequency word.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_WORDS 1000
#define MAX_WORD_LEN 100

typedef struct {
    char word[MAX_WORD_LEN];
    int count;
} WordFreq;

int compare(const void *a, const void *b) {
    WordFreq *wordA = (WordFreq *)a;
    WordFreq *wordB = (WordFreq *)b;
    return wordB->count - wordA->count;
}

int main() {
    char text[10000];
    WordFreq words[MAX_WORDS];
    int wordCount = 0;

    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);

    char *token = strtok(text, " \t\n.,!?;:");
    while (token != NULL) {
        int found = 0;
        for (int i = 0; i < wordCount; i++) {
            if (strcmp(words[i].word, token) == 0) {
                words[i].count++;
                found = 1;
                break;
            }
        }
        if (!found) {
            strcpy(words[wordCount].word, token);
            words[wordCount].count = 1;
            wordCount++;
        }
        token = strtok(NULL, " \t\n.,!?;:");
    }

    qsort(words, wordCount, sizeof(WordFreq), compare);

    printf("Top 3 most frequent words:\n");
    for (int i = 0; i < 3 && i < wordCount; i++) {
        printf("%s: %d\n", words[i].word, words[i].count);
    }

    return 0;
}