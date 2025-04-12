// Write a program to accept input for the RE b(a|b)*b. 
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool matchRE(const char *input) {
    int len = strlen(input);
    if (len < 2 || input[0] != 'b' || input[len - 1] != 'b') {
        return false;
    }
    for (int i = 1; i < len - 1; i++) {
        if (input[i] != 'a' && input[i] != 'b') {
            return false;
        }
    }
    return true;
}

int main() {
    char input[100];
    printf("Enter a string: ");
    scanf("%s", input);

    if (matchRE(input)) {
        printf("The input matches the RE b(a|b)*b.\n");
    } else {
        printf("The input does not match the RE b(a|b)*b.\n");
    }

    return 0;
}