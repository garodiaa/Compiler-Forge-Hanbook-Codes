// Write a program that eliminate extra article in a sentence. 
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void remove_extra_articles(char *sentence) {
    char *articles[] = {"a", "an", "the"};
    char result[1000] = "";
    char word[100];
    int i, is_article, len = strlen(sentence);
    char *ptr = sentence;

    while (*ptr) {
        // Extract a word
        sscanf(ptr, "%s", word);
        is_article = 0;

        // Check if the word is an article
        for (i = 0; i < 3; i++) {
            if (strcasecmp(word, articles[i]) == 0) {
                is_article = 1;
                break;
            }
        }

        // Append the word to the result if it's not an article
        if (!is_article) {
            strcat(result, word);
            strcat(result, " ");
        }

        // Move the pointer to the next word
        ptr += strlen(word);
        while (*ptr && isspace(*ptr)) ptr++;
    }

    // Copy the result back to the original sentence
    strcpy(sentence, result);
}

int main() {
    char sentence[1000];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove trailing newline character
    sentence[strcspn(sentence, "\n")] = '\0';

    remove_extra_articles(sentence);

    printf("Modified sentence: %s\n", sentence);

    return 0;
}