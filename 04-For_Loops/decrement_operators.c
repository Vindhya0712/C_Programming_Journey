#include <stdio.h>


int main() {
    int i = 1;
    printf("Decrease, then use -- %d \n", --i);
    printf("Just use -- %d \n", i);
    printf("Use, then decrease -- %d \n", i--);
    printf("Just use -- %d", i);

    return 0;
}
