// Write a program that takes a string as input and prints each word of that string in new line. 
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    char *token = strtok(str, " \t\n");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " \t\n");
    }

    return 0;
}