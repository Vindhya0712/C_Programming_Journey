#include <stdio.h>

void printnto1(int n);

int main() {
    int num;
    printf("Enter starting number: ");
    scanf("%d",  &num);
    printnto1(num);
    return 0;
}

void printnto1(int n) {
    if (n == 0) return;
    printf("%d \n", n);
    printnto1(n-1);
}

