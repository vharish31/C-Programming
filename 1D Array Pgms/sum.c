#include<stdio.h>
int main(){
    int num,sum = 0;
    printf("Enter the no. of elements: ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter %d elements: \n", num);
    for(int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum of all elements = %d\n", sum);
    return 0;
}