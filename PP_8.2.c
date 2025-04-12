// Write a program to count valid and invalid identifiers. 
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isValidIdentifier(const char *str) {
    if (!isalpha(str[0]) && str[0] != '_') {
        return 0; // Invalid if it doesn't start with a letter or underscore
    }
    for (int i = 1; str[i] != '\0'; i++) {
        if (!isalnum(str[i]) && str[i] != '_') {
            return 0; // Invalid if it contains non-alphanumeric characters (except underscore)
        }
    }
    return 1; // Valid identifier
}

int main() {
    char identifiers[10][50];
    int validCount = 0, invalidCount = 0;

    printf("Enter up to 10 identifiers (type 'end' to stop):\n");
    for (int i = 0; i < 10; i++) {
        printf("Identifier %d: ", i + 1);
        scanf("%s", identifiers[i]);
        if (strcmp(identifiers[i], "end") == 0) {
            break;
        }
        if (isValidIdentifier(identifiers[i])) {
            validCount++;
        } else {
            invalidCount++;
        }
    }

    printf("\nValid identifiers: %d\n", validCount);
    printf("Invalid identifiers: %d\n", invalidCount);

    return 0;
}
