// Write a program that finds and prints single line comment. 
#include <stdio.h>
#include <string.h>

void findSingleLineComments(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        printf("Error: Could not open file.\n");
        return;
    }

    char line[1024];
    while (fgets(line, sizeof(line), file)) {
        char *commentStart = strstr(line, "//");
        if (commentStart) {
            printf("Single-line comment: %s", commentStart);
        }
    }

    fclose(file);
}