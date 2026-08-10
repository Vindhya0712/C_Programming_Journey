#include <stdio.h>


int main() {
    printf("Incrementing floats\n");
    for (float i = 1.0; i <= 5.0; i++) {
        printf("Current value of 'i' is %.2f \n", i);
    }
    printf("Decrementing floats\n");
    for (float i = 6.00; i >= 1.00; i--) {
        printf("Current value of 'i' is %.2f \n", i);
    }
    return 0;
}
