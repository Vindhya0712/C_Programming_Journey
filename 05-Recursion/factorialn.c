#include <stdio.h>


int factorial(int n);

int main() {
    int num;
    printf("Enter value of n: ");
    scanf("%d", &num);

    printf("The factorial of %d is %d", num, factorial(num));
}

int factorial(int n) {
    if (n==0) {
        return 1;
    }
    int factNm1 = factorial(n-1);
    int factN = factNm1 * n;
    return factN;
}
