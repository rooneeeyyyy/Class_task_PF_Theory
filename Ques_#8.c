#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char text[1000];
    int choice;

    // Read input text from the user
    printf("Enter a line of text: ");
    fgets(text, sizeof(text), stdin);
    
    // Remove the newline character if present
    text[strcspn(text, "\n")] = '\0';

    do {
        printf("\n--- MENU ---\n");
        printf("1. Count number of characters\n");
        printf("2. Count number of words\n");
        printf("3. Search for a character\n");
        printf("4. Count vowels, consonants, and spaces\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        // Clear input buffer
        while (getchar() != '\n');

        switch (choice) {
            case 1: {
                // 1. Count number of characters
                int char_count = strlen(text);
                printf("Total number of characters: %d\n", char_count);
                break;
            }
            case 2: {
                // 2. Count number of words
                int word_count = 0;
                int in_word = 0;
                for (int i = 0; text[i] != '\0'; i++) {
                    if (isspace(text[i])) {
                        in_word = 0;
                    } else if (in_word == 0) {
                        in_word = 1;
                        word_count++;
                    }
                }
                printf("Total number of words: %d\n", word_count);
                break;
            }
            case 3: {
                // 3. Searching a character
                char target;
                int found = 0;
                printf("Enter a character to search: ");
                scanf("%c", &target);

                printf("Character '%c' found at positions: ", target);
                for (int i = 0; text[i] != '\0'; i++) {
                    if (text[i] == target) {
                        printf("%d ", i + 1); // 1-based index position
                        found = 1;
                    }
                }
                if (!found) {
                    printf("Not found in the text.");
                }
                printf("\n");
                break;
            }
            case 4: {
                // 4. Count vowels, consonants, and spaces
                int vowels = 0, consonants = 0, spaces = 0;
                for (int i = 0; text[i] != '\0'; i++) {
                    char ch = tolower(text[i]);
                    if (ch == ' ') {
                        spaces++;
                    } else if (ch >= 'a' && ch <= 'z') {
                        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                            vowels++;
                        } else {
                            consonants++;
                        }
                    }
                }
                printf("Vowels: %d\n", vowels);
                printf("Consonants: %d\n", consonants);
                printf("Spaces: %d\n", spaces);
                break;
            }
            case 5:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice! Please choose between 1 and 5.\n");
        }
    } while (choice != 5);

    return 0;
}