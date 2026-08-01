#include <stdio.h>


int main() {
    int a, b;
    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    printf("Sum of a and b is %d", a + b);
    printf("\nDifference of a and b is %d", a - b);
    printf("\nProduct of a and b is %d", a * b);
    printf("\nRemainder of a and b is rounded off to %d", a/b); 

    return 0;
}
