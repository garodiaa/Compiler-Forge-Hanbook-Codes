// Write a program to check if it’s a keyword or not. 
#include <stdio.h>
#include <string.h>

int isKeyword(const char *word) {
    const char *keywords[] = {
        "auto", "break", "case", "char", "const", "continue", "default", "do",
        "double", "else", "enum", "extern", "float", "for", "goto", "if",
        "int", "long", "register", "return", "short", "signed", "sizeof",
        "static", "struct", "switch", "typedef", "union", "unsigned", "void",
        "volatile", "while"
    };
    int numKeywords = sizeof(keywords) / sizeof(keywords[0]);

    for (int i = 0; i < numKeywords; i++) {
        if (strcmp(word, keywords[i]) == 0) {
            return 1; // It's a keyword
        }
    }
    return 0; // Not a keyword
}

int main() {
    char word[50];
    printf("Enter a word: ");
    scanf("%s", word);

    if (isKeyword(word)) {
        printf("\"%s\" is a keyword.\n", word);
    } else {
        printf("\"%s\" is not a keyword.\n", word);
    }

    return 0;
}
