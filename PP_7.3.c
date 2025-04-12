// Find the word with the most vowels in a sentence. 
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_vowels(const char *word) {
    int count = 0;
    while (*word) {
        char c = tolower(*word);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
        word++;
    }
    return count;
}

void find_word_with_most_vowels(const char *sentence) {
    char word[100], max_word[100];
    int max_vowels = 0, vowels;
    const char *ptr = sentence;

    while (sscanf(ptr, "%99s", word) == 1) {
        vowels = count_vowels(word);
        if (vowels > max_vowels) {
            max_vowels = vowels;
            strcpy(max_word, word);
        }
        ptr += strlen(word);
        while (*ptr && isspace(*ptr)) ptr++;
    }

    printf("Word with the most vowels: %s (Vowels: %d)\n", max_word, max_vowels);
}

int main() {
    char sentence[256];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0'; // Remove trailing newline
    find_word_with_most_vowels(sentence);
    return 0;
}
