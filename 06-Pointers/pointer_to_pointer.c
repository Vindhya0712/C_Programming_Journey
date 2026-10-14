#include <stdio.h>


int _square(int *n);

int main() {
    // float price = 100.00;
    // float *ptr = &price;
    // float **pptr = &ptr;


    //print the value of i from its pointer to pointer
    // int i = 5;
    // int *ptr = &i;
    // int **pptr = &ptr;

    // printf("%d", **pptr);

    //Function Call
    //1. Call by Value
    //The traditional way you create functions, and call them while passing an argument
    //2. Call by Reference
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    _square(&number); // becoz this time we need to pass in the address of the varaible
    printf("After executing the function, I have %d as number", number);
    /*In the traditional method, the value of the variable that you originally passed to the function doesn't change because the formal parameter
    creates a copy of the varaible and performs all the tasks on it. So, if I printed out the variable again after the function execution, 
    it's value would have remained unchanged. However, in the second type -- call by reference, you pass in the address of the variable, 
    so all the tasks are performed directly on the original variable this time. Hence, in the end, it's value is changed*/
    return 0;
}


int _square(int *n) {
    (*n) = (*n) * (*n);
    printf("Square = %d \n", *n);
}
