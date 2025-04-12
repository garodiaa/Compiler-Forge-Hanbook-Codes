// Find the Second Most Frequent Word in a given string. 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_WORDS 100
#define MAX_WORD_LEN 50

typedef struct {
    char word[MAX_WORD_LEN];
    int count;
} WordFreq;

int compare(const void *a, const void *b) {
    WordFreq *wordA = (WordFreq *)a;
    WordFreq *wordB = (WordFreq *)b;
    return wordB->count - wordA->count;
}

void findSecondMostFrequentWord(char *str) {
    WordFreq words[MAX_WORDS] = {0};
    int wordCount = 0;

    char *token = strtok(str, " ");
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
        token = strtok(NULL, " ");
    }

    qsort(words, wordCount, sizeof(WordFreq), compare);

    if (wordCount < 2) {
        printf("No second most frequent word found.\n");
    } else {
        printf("Second most frequent word: %s\n", words[1].word);
    }
}

int main() {
    char str[] = "this is a test this is only a test this is a test";
    findSecondMostFrequentWord(str);
    return 0;
}