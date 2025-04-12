// Write a program to count number of para’s in a paragraph.
#include <stdio.h>

int main() {
    char ch;
    int paraCount = 0;
    int isNewPara = 1;

    printf("Enter text (Press Ctrl+D to end input on Linux/Mac or Ctrl+Z on Windows):\n");

    while ((ch = getchar()) != EOF) {
        if (ch == '\n') {
            if (isNewPara) {
                paraCount++;
                isNewPara = 0;
            }
        } else if (ch != ' ' && ch != '\t') {
            isNewPara = 1;
        }
    }

    printf("Number of paragraphs: %d\n", paraCount);
    return 0;
}