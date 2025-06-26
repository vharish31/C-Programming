#include <stdio.h>
int main() {
    char grade;
    while (1) {
        printf("Enter your grade (A, B, C, D, F) or Q to quit: \n");
        scanf(" %c", &grade);

        if (grade == 'Q' || grade == 'q') {
            printf("Exiting the program.\n");
            break;
        }

        switch (grade) {
            case 'A':
                printf("Excellent!\n");
                break;
            case 'B':
                printf("Good job!\n");
                break;
            case 'C':
                printf("Well done.\n");
                break;
            case 'D':
                printf("You passed.\n");
                break;
            case 'F':
                printf("Better try again.\n");
                break;
            default:
                printf("Invalid grade.\n");
                continue;
        }
    }
    return 0;
}