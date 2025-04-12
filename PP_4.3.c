// Write a program to check if a given string follows the RE (0|1)*1(0|1) (any binary string ending in "1" followed by one more bit). 
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool matchesRE(const char *str) {
    int len = strlen(str);
    if (len < 2) {
        return false; // String must be at least 2 characters long
    }
    return (str[len - 2] == '1') && (str[len - 1] == '0' || str[len - 1] == '1');
}

int main() {
    char input[100];
    printf("Enter a binary string: ");
    scanf("%s", input);

    if (matchesRE(input)) {
        printf("The string matches the RE (0|1)*1(0|1).\n");
    } else {
        printf("The string does not match the RE (0|1)*1(0|1).\n");
    }

    return 0;
}