#include <stdio.h>

int powern(int x, int n);

int main() {
    int x, n;
    printf("Enter base value: ");
    scanf("%d", &x);
    printf("Enter value of power: ");
    scanf("%d", &n);
    printf("%d raised to power %d gives %d", x, n, powern(x, n));
    return 0;
}

int powern(int x, int n) {
    if (n == 0) return 1;
    int powerxn = x * powern(x, n-1);
    return powerxn;
}
