// C Program to print Pyramid of Stars
#include <stdio.h>

int main() {
    int rows, i, j, space;

    printf("Enter the no of rows for the pyramid: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}