#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char name[50];
    char gender;
    char contact[20];
    
    int min_length;
    int num_special;
    int num_digits;
    
    char special_chars[] = {'#', '$', '%', '&', '@', '!', '*', '+', '-', '?'};
    int total_special = 10;
    
    char password[9]; 
    int pwd_index = 0;

    printf("Enter name: ");
    scanf("%s", name);
    
    printf("Enter gender (M/F/O): ");
    scanf(" %c", &gender);
    
    printf("Enter contact number: ");
    scanf("%s", contact);

    printf("\n--- Password Style Configuration ---\n");
    printf("1. Minimum length of the password: ");
    scanf("%d", &min_length);
    
    printf("2. Number of special characters: ");
    scanf("%d", &num_special);
    
    printf("3. Number of digits: ");
    scanf("%d", &num_digits);

    srand(time(NULL));

    for (int i = 0; i < 3 && name[i] != '\0'; i++) {
        password[pwd_index++] = name[i];
    }

    for (int i = 0; i < num_digits && contact[i] != '\0'; i++) {
        password[pwd_index++] = contact[i];
    }

    for (int i = 0; i < num_special; i++) {
        int rand_index = rand() % total_special;
        password[pwd_index++] = special_chars[rand_index];
    }

    // Null-terminate the password string
    password[pwd_index] = '\0';

    password[8] = '\0';

    printf("\nGenerated Secure Password: %s\n", password);

    return 0;
}