// Write a C program that will count the number of line/s in a given input. 
#include <stdio.h>

int main() {
    int c, line_count = 0;

    printf("Enter text (Ctrl+D to end input on Unix/Linux or Ctrl+Z on Windows):\n");

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            line_count++;
        }
    }

    printf("Number of lines: %d\n", line_count);
    return 0;
}
