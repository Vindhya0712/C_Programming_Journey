#include <stdio.h>

int main() {
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;

    printf("Value of variable 'age' is %d \n" , age);
    printf("Value of variable '_age' is %d \n", _age);

    //address
    printf("%p \n", &age);
    //address
    printf("%p \n", ptr);
    //converting the address to an unsigned integer format to read it better
    printf("%u \n", &age); //This will generate a warning, but no error, so chill!
    printf("%p \n", &ptr);

    return 0;
}
