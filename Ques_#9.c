#include <stdio.h>
#include <string.h>

int main() {
    // 1. Store at least 5 English words in a 2D character array
    // Assuming a maximum of 20 characters per word
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

    // 2. Display the list of all words
    printf("--- Dictionary Word List ---\n");
    for (int i = 0; i < num_words; i++) {
        printf("%d. %s\n", i + 1, dictionary[i]);
    }

    // 3. Ask the user to enter a word to search for
    printf("\nEnter a word to search for: ");
    scanf("%s", search_word);

    // Check if the word exists in the list
    for (int i = 0; i < num_words; i++) {
        if (strcmp(dictionary[i], search_word) == 0) {
            found = 1;
            break;
        }
    }

    // 4. Print the result based on whether the word exists
    if (found) {
        printf("WORD FOUND IN DICTIONARY.\n");
    } else {
        printf("WORD NOT FOUND IN DICTIONARY.\n");
    }

    return 0;
}