#include <stdio.h>

void greet(char nationality_code);

int main() {
    char nationality;
    printf("What is your nationality? Enter 'I' for Indian or 'F' for French: ");
    scanf("%c", &nationality);
    greet(nationality);
    return 0;
}

void greet(char nationality_code) {
    if (nationality_code == 'I' || nationality_code == 'i') {
        printf("Namaste!");
    } else if (nationality_code == 'F' || nationality_code == 'f') {
        printf("Bonjour!");
    } else {
        printf("Hey there!");
    }
}
