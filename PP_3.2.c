// Write a C program that will take single/multiple lines comments in an input String and count & print the number of comments as output.  
#include <stdio.h>
#include <string.h>

int countComments(const char *input) {
    int count = 0;
    int i = 0;
    while (input[i] != '\0') {
        if (input[i] == '/' && input[i + 1] == '/') {
            count++;
            while (input[i] != '\n' && input[i] != '\0') {
                i++;
            }
        } else if (input[i] == '/' && input[i + 1] == '*') {
            count++;
            i += 2;
            while (!(input[i] == '*' && input[i + 1] == '/') && input[i] != '\0') {
                i++;
            }
            if (input[i] != '\0') {
                i += 2;
            }
        } else {
            i++;
        }
    }
    return count;
}

int main() {
    char input[1000];
    printf("Enter the input string: ");
    fgets(input, sizeof(input), stdin);

    int commentCount = countComments(input);
    printf("Number of comments: %d\n", commentCount);

    return 0;
}