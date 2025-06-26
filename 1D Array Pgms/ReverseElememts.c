#include<stdio.h>
int main() {
    int num;
    printf("Enter the no. of elements: ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter %d elements: \n", num);
    for(int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Array in reverse order: ");
    for(int i = num - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
