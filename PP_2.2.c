// Write a program that counts whitespaces, digits, punctuation in a string. 
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int whitespaces = 0, digits = 0, punctuation = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            whitespaces++;
        } else if (isdigit(str[i])) {
            digits++;
        } else if (ispunct(str[i])) {
            punctuation++;
        }
    }

    printf("Whitespaces: %d\n", whitespaces);
    printf("Digits: %d\n", digits);
    printf("Punctuation: %d\n", punctuation);

    return 0;
}