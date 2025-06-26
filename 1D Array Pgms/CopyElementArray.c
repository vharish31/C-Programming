// Copy all elements from one array to another
#include<stdio.h>
int main() {
    int num;
    printf("Enter the no. of elements: ");
    scanf("%d", &num);
    int arr1[num], arr2[num];
    printf("Enter %d elements: \n", num);
    for(int i = 0; i < num; i++) {
        scanf("%d", &arr1[i]);
    }
    for(int i = 0; i < num; i++) {
        arr2[i] = arr1[i];
    }
    printf("Elements of Second Array: ");
    for(int i = 0; i < num; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    return 0;
}
