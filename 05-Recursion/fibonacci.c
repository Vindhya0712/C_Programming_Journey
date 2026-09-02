#include <stdio.h>

int fibonacci(int num);

int main() {
    int n;
    printf("Which term of the fibonacci do you want? ");
    scanf("%d", &n);
    printf("%dth term of the fibonacci series is %d", n, fibonacci(n));
    return 0;
}


int fibonacci(int num) {
    //finds the nth term of the fibonacci series
    if (num == 0) {
        return 0;
    } else if (num == 1) {
        return 1;
    }
    int fibNm1 = fibonacci(num - 1);
    int fibNm2 = fibonacci(num - 2);
    int fibN = fibNm1 + fibNm2;
    
    return fibN;
}
