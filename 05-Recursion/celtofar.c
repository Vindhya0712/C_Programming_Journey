#include <stdio.h>


float convert_temp(float celsius);

int main() {
    float cel;
    printf("Enter temp in celsius: ");
    scanf("%f", &cel);
    printf("Temp in farhenheit is %.2f", convert_temp(cel));
}

float convert_temp(float celsius) {
    float farh = celsius * (9.0/5.0) + 32;
    return farh;
}
