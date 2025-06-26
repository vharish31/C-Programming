#include<stdio.h>
int main() {
    int num, negative = 0;
    printf("Enter the no. of elements: ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter %d elements: \n", num);
    for(int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] < 0)
            negative++;
    }
    printf("Total negative elements = %d\n", negative);
    return 0;
}
