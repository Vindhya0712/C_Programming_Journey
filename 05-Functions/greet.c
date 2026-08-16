#include <stdio.h>

int greet(char nationality_code);

int main() {
    char nationality;
    int user_choice;
    printf("What is your nationality? Enter 'I' for Indian or 'F' for French: ");
    scanf("%c", &nationality);
    user_choice = greet(nationality);
    if (user_choice == 1) {
        printf("Namaste!");
    } else if (user_choice == 2) {
        printf("Bonjour!");
    } else {
        printf("Hey there!");
    }

    return 0;
}

int greet(char nationality_code) {
    if (nationality_code == 'I' || nationality_code == 'i') {
        return 1;
    } else if (nationality_code == 'F' || nationality_code == 'f') {
        return 2;
    } else {
        return 0;
    }
}
