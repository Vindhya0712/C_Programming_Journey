#include <stdio.h>

void print1ton(int n);

int main() {
    int num;
    printf("Enter starting number: ");
    scanf("%d", &num);
    print1ton(num);
    return 0;
}

void print1ton(int n) {
    if (n == 0) {
        return;
    }
    print1ton(n-1);
    printf("%d \n", n);
}