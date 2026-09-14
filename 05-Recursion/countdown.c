#include <stdio.h>

int countdown(int n);

int main() {
    int num;
    printf("Enter countdown length: ");
    scanf("%d", &num);
    countdown(num);
    return 0;
}

int countdown(int n) {
    if (n == 0) {
        printf("Liftoff! \n");
        return 0;
    }
    printf("%d \n", n);
    countdown(n - 1);
}