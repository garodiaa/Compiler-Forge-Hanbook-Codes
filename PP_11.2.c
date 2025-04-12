// Write a program to find multiple title in a string. 
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void findTitles(const char *str) {
    int inTitle = 0;
    const char *start = NULL;

    while (*str) {
        if (isupper(*str) && (str == start || *(str - 1) == ' ')) {
            if (!inTitle) {
                inTitle = 1;
                start = str;
            }
        } else if (inTitle && (*str == ' ' || *(str + 1) == '\0')) {
            inTitle = 0;
            if (*(str + 1) == '\0') str++;
            printf("Title: ");
            while (start < str) {
                putchar(*start);
                start++;
            }
            printf("\n");
        }
        str++;
    }
}

int main() {
    char input[256];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0'; // Remove newline character

    findTitles(input);

    return 0;
}