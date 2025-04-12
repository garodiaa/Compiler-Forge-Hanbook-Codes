// Write a program that will eliminate single line comment from a given input. 
#include <stdio.h>
#include <string.h>

int main() {
    char line[256];
    printf("Enter the input (Ctrl+D to end):\n");

    while (fgets(line, sizeof(line), stdin)) {
        char *comment_start = strstr(line, "//");
        if (comment_start) {
            *comment_start = '\0'; // Truncate the line at the start of the comment
        }
        printf("%s", line);
    }

    return 0;
}