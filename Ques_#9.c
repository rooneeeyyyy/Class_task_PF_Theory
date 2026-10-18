#include <stdio.h>
#include <string.h>

int main() {

    char dictionary[5][20] = {
        "apple",
        "banana",
        "computer",
        "programming",
        "science"
    };
    
    int num_words = 5;
    char search_word[20];
    int found = 0;

    printf("--- Dictionary Word List ---\n");
    for (int i = 0; i < num_words; i++) {
        printf("%d. %s\n", i + 1, dictionary[i]);
    }

    printf("\nEnter a word to search for: ");
    scanf("%s", search_word);

    for (int i = 0; i < num_words; i++) {
        if (strcmp(dictionary[i], search_word) == 0) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("WORD FOUND IN DICTIONARY.\n");
    } else {
        printf("WORD NOT FOUND IN DICTIONARY.\n");
    }

    return 0;
}