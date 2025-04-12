// Write a program to accept input for the RE (abc)*. 
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to check if the input matches the regular expression (abc)*
bool matchRE(const char *input) {
    int len = strlen(input);
    if (len % 3 != 0) {
        return false; // Length must be a multiple of 3
    }
    for (int i = 0; i < len; i += 3) {
        if (strncmp(&input[i], "abc", 3) != 0) {
            return false; // Each group of 3 characters must be "abc"
        }
    }
    return true;
}

int main() {
    char input[100];
    printf("Enter a string: ");
    scanf("%99s", input);

    if (matchRE(input)) {
        printf("The input matches the regular expression (abc)*.\n");
    } else {
        printf("The input does not match the regular expression (abc)*.\n");
    }

    return 0;
}