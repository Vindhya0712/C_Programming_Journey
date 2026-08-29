#include <stdio.h>

int sum(int n);

int main() {
    int num;
    printf("Enter value of n: ");
    scanf("%d", &num);
    printf("Sum of first %d natural numbers is %d", num, sum(num));

    return 0;
}


//recursive function
int sum(int n) {
    if (n==1) {
        return 1;
    }
    int sumNm1 = sum(n-1); //sum of 1 to n
    int sumN = sumNm1 + n;
    return sumN;
}
