#include <stdio.h>

void printmessage(int count, char mess[100]);

int main() {
    //print Hello World 5 times
    int num;
    char message[100];
    printf("How many times do you want to print the message? ");
    scanf("%d", &num);
    printf("What is the message you want to print? Limit: 100 characters \n");
    getchar();
    fgets(message, sizeof(message), stdin);

    printf("\n");
    printmessage(num, message);

    return 0;
}

//recursive function
void printmessage(int count, char mess[100]) {
    if (count == 0) {
        return;
    }
    printf("%s", mess);
    printmessage(count - 1, mess);
}

