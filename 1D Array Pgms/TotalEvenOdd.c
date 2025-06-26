#include <stdio.h>
int main() {
    int num, even = 0, odd = 0;
    printf("Enter the no. of elements: ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter %d elements: \n", num);
    for(int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Total even elements = %d\n", even);
    printf("Total odd elements = %d\n", odd);
    return 0;
}