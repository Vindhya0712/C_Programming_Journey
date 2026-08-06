#include <stdio.h>


int main() {
    int month;
    printf("Enter month number: ");
    scanf("%d", &month);

    switch (month) {
        case 1: printf("January");
                break;
        case 2: printf("February");
                break;
        case 3: printf("March");
                break;
        case 4: printf("April");
                break;
        case 5: printf("May");
                break;
        case 6: printf("June");
                break;
        case 7: printf("July");
                break;
        case 8: printf("August");
                break;
        case 9: printf("September");
                break;
        case 10: printf("October");
                break;
        case 11: printf("November");
                break;
        case 12: printf("December");
                break;
        default: printf("That is not a month number. \nPlease enter a valid month number between 1-12");
                break;
    }

    printf("Next problem starts. \nAsk user for day number input and display the day name.\n");
    char day;
    // m-Monday, t-Tuesday, w-Wed, T-Thrus, f-friday, s-Sat, S-Sun
    printf("Enter day number (1-7): ");
    scanf("%c", &day);

    switch (day) {
        case 'm': printf("Monday");
                break;
        case 't': printf("Tuesday");
                break;
        case 'w': printf("Wednesday");
                break;
        case 'T': printf("Thursday");
                break;
        case 'f':printf("Friday");
                break;
        case 's': printf("Saturday");
                break;
        case 'S': printf("Sunday");
                break;
        default: printf("Not a valid day! \nEnter a number between 1 and 7");
                break;
    }


    return 0;
}
