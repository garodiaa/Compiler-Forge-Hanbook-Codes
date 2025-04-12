// Write a program count each article type. 
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char text[1000];
    int a_count = 0, an_count = 0, the_count = 0;

    printf("Enter a text: ");
    fgets(text, sizeof(text), stdin);

    char *word = strtok(text, " \t\n");
    while (word != NULL) {
        for (int i = 0; word[i]; i++) {
            word[i] = tolower(word[i]);
        }

        if (strcmp(word, "a") == 0) {
            a_count++;
        } else if (strcmp(word, "an") == 0) {
            an_count++;
        } else if (strcmp(word, "the") == 0) {
            the_count++;
        }

        word = strtok(NULL, " \t\n");
    }

    printf("Count of 'a': %d\n", a_count);
    printf("Count of 'an': %d\n", an_count);
    printf("Count of 'the': %d\n", the_count);

    return 0;
}