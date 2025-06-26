#include <stdio.h>
int main() {
    int num;

    printf("Enter the number of elements: ");
    scanf("%d", &num);
    
    int arr[num];
    printf("Enter %d elements:\n", num);
    for(int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("The elements in the array are:\n");
    for(int i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
