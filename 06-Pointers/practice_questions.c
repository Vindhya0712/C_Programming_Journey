#include <stdio.h>


int main() {
    int *ptr, x;
    ptr = &x;
    *ptr = 0;

    printf("x = %d \n", x); // My answer: 0, Actual Answer: 0
    printf("*ptr = %d \n", *ptr); //My answer = 0, Actual Answer: 0

    *ptr += 5;
    printf("x = %d \n", x); //My answer = 5, Actual Answer: 5
    printf("*ptr = %d \n", *ptr); //My answer = 5, Actual Answer: 5

    (*ptr) ++;
    printf("x = %d \n", x); //My answer = 5, Actual Answer: 6
    printf("*ptr = %d \n", *ptr); //My answer = 6, Actual Answer: 6

    return 0;
}
