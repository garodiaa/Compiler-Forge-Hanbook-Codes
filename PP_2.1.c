// Write a program that eliminates Eliminate special character in a string. 
#include <stdio.h>
#include <ctype.h>

void removeSpecialCharacters(char *str) {
    char *src = str, *dst = str;
    while (*src) {
        if (isalnum((unsigned char)*src) || isspace((unsigned char)*src)) {
            *dst++ = *src;
        }
        src++;
    }
    *dst = '\0';
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    removeSpecialCharacters(str);

    printf("String after removing special characters: %s\n", str);
    return 0;
}