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
    
    printf("The elements in the array are in reverse order:\n");
    for(int i =num-1;i>-1; i--) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
