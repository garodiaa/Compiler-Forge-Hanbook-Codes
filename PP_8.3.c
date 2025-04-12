// Write a program to find the longest and shortest valid identifiers.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_IDENTIFIERS 100
#define MAX_LENGTH 100

int is_valid_identifier(const char *str) {
    if (!isalpha(str[0]) && str[0] != '_') {
        return 0;
    }
    for (int i = 1; str[i] != '\0'; i++) {
        if (!isalnum(str[i]) && str[i] != '_') {
            return 0;
        }
    }
    return 1;
}

int main() {
    char identifiers[MAX_IDENTIFIERS][MAX_LENGTH];
    int count = 0;

    printf("Enter identifiers (type 'END' to stop):\n");
    while (count < MAX_IDENTIFIERS) {
        char input[MAX_LENGTH];
        scanf("%s", input);
        if (strcmp(input, "END") == 0) {
            break;
        }
        if (is_valid_identifier(input)) {
            strcpy(identifiers[count++], input);
        } else {
            printf("Invalid identifier: %s\n", input);
        }
    }

    if (count == 0) {
        printf("No valid identifiers entered.\n");
        return 0;
    }

    char *longest = identifiers[0];
    char *shortest = identifiers[0];

    for (int i = 1; i < count; i++) {
        if (strlen(identifiers[i]) > strlen(longest)) {
            longest = identifiers[i];
        }
        if (strlen(identifiers[i]) < strlen(shortest)) {
            shortest = identifiers[i];
        }
    }

    printf("Longest identifier: %s\n", longest);
    printf("Shortest identifier: %s\n", shortest);

    return 0;
}
