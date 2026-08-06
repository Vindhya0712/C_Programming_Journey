#include <stdio.h>


int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number >= 0) {
        printf("Positive\n");
        if (number % 2 == 0) {
            printf("Even number.\n");
        }
        else {
            printf("Odd number.\n");
        }
    } 
    else {
        printf("Negative\n");
    }

    return 0;
}
