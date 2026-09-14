#include <stdio.h>


int sumdigits(int n);

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Sum of digits of %d is %d", num, sumdigits(num));
    return 0;
}

int sumdigits(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + sumdigits(n / 10);
}
