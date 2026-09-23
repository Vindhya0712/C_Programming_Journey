#include <stdio.h>

int sumn(int n);

int main() {
    int num;
    printf("Enter value of n: ");
    scanf("%d", &num);
    printf("%d", sumn(num));
    return 0;
}

int sumn(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    int sumnm1 = n + sumn(n-1);
    return sumnm1;
}
