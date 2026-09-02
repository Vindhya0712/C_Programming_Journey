#include <stdio.h>


int main() {
    printf("number = %3d \n", 10);
    printf("number = %2d \n", 10);
    printf("number = %1d \n", 10);
    printf("number = %7.2f \n", 5.4321);
    printf("number = %.2f \n", 5.4391);
    printf("number = %.9f \n", 5.4321);
    printf("number = %f \n", 5.4321);
    printf("number = %06.1f \n", 5.5);
    printf("%-+6.1f = number \n", 5.5);
    printf("%s", "hello");
    printf("\n %3s", "hello");
    printf("\n %10s", "hello");
    printf("\n %-10s", "hello");
    printf("\n %10.3s", "hello");
    return 0;
}
