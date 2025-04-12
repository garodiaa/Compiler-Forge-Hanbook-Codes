// Write a program that counts the number of spaces, tabs, and newlines in a given input string. 
#include <stdio.h>

int main() {
    int spaces = 0, tabs = 0, newlines = 0;
    char c;

    printf("Enter text (Ctrl+D to end input):\n");
    while ((c = getchar()) != EOF) {
        if (c == ' ')
            spaces++;
        else if (c == '\t')
            tabs++;
        else if (c == '\n')
            newlines++;
    }

    printf("Spaces: %d\n", spaces);
    printf("Tabs: %d\n", tabs);
    printf("Newlines: %d\n", newlines);

    return 0;
}