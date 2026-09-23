#include <stdio.h>
#include <string.h>

void reversestring(char stringvalue[], int index);

int main() {
    char string[100];
    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);
    //to remove the trailing new line character
    string[strcspn(string, "\n")] = '\0';

    int len = strlen(string);
    reversestring(string, len - 1); // len-1 so that we start from the last character
    printf("\n");

    return 0;
}

void reversestring(char stringvalue[], int index) {
    if (index < 0) return;
    printf("%c", stringvalue[index]);
    reversestring(stringvalue, index - 1); 
}
