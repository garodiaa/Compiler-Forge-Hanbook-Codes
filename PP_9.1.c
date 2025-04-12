// Write a program that does preposition Count from a given string. 
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_preposition(const char *word) {
    const char *prepositions[] = {
        "about", "above", "across", "after", "against", "along", "among", "around",
        "at", "before", "behind", "below", "beneath", "beside", "between", "beyond",
        "by", "down", "during", "except", "for", "from", "in", "inside", "into",
        "near", "of", "off", "on", "out", "outside", "over", "past", "since",
        "through", "throughout", "to", "toward", "under", "until", "up", "upon",
        "with", "within", "without"
    };
    int num_prepositions = sizeof(prepositions) / sizeof(prepositions[0]);
    for (int i = 0; i < num_prepositions; i++) {
        if (strcmp(word, prepositions[i]) == 0) {
            return 1;
        }
    }
    return 0;
}

void count_prepositions(const char *str) {
    char buffer[1000];
    strcpy(buffer, str);
    char *token = strtok(buffer, " ");
    int count = 0;

    while (token != NULL) {
        for (int i = 0; token[i]; i++) {
            token[i] = tolower(token[i]);
        }
        if (is_preposition(token)) {
            count++;
        }
        token = strtok(NULL, " ");
    }

    printf("Number of prepositions: %d\n", count);
}

int main() {
    char input[1000];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0'; // Remove trailing newline
    count_prepositions(input);
    return 0;
}