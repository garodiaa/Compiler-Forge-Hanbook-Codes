// Write a program that does tokenization without strtok() function.
#include <stdio.h>
#include <ctype.h>

void tokenize(const char *str) {
    const char *start = str;
    while (*str) {
        if (isspace(*str)) {
            if (start != str) {
                printf("Token: ");
                for (const char *p = start; p < str; ++p) {
                    putchar(*p);
                }
                printf("\n");
            }
            start = str + 1;
        }
        ++str;
    }
    if (start != str) {
        printf("Token: ");
        while (*start) {
            putchar(*start++);
        }
        printf("\n");
    }
}

int main() {
    char input[] = "This is a sample string for tokenization.";
    printf("Input: %s\n", input);
    printf("Tokens:\n");
    tokenize(input);
    return 0;
}