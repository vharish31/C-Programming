#include <stdio.h>
#include <string.h>

int main() {
    char name[20];

    do {
        printf("Enter a username (at least 8 characters): ");
        scanf("%s",name);
        
        if (strlen(name)<8) {
            printf("Username should have atleast 8 characters. Try again.\n");
        }

    } while (strlen(name)<8);

    printf("Username accepted: %s\n",name);
    return 0;
}