// Write a program that creates a Syntax table (letter, digits, symbol, arithmetic/logical op….). 
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void createSyntaxTable(const char *input) {
    printf("Character\tType\n");
    printf("-------------------------\n");
    for (int i = 0; input[i] != '\0'; i++) {
        char ch = input[i];
        if (isalpha(ch)) {
            printf("%c\t\tLetter\n", ch);
        } else if (isdigit(ch)) {
            printf("%c\t\tDigit\n", ch);
        } else if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%' || 
                   ch == '&' || ch == '|' || ch == '^' || ch == '!' || ch == '=' || 
                   ch == '<' || ch == '>') {
            printf("%c\t\tArithmetic/Logical Operator\n", ch);
        } else if (ispunct(ch)) {
            printf("%c\t\tSymbol\n", ch);
        } else if (isspace(ch)) {
            printf("%c\t\tWhitespace\n", ch);
        } else {
            printf("%c\t\tUnknown\n", ch);
        }
    }
}

int main() {
    char input[256];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0'; // Remove trailing newline
    createSyntaxTable(input);
    return 0;
}