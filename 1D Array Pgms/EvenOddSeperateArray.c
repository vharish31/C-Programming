// Put even and odd elements of an array into two separate arrays.
#include <stdio.h>
int main(){
    int num;
    printf("Enter the no. of elements: ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter the elements: \n");
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    int even[num], odd[num];
    int evenCount = 0, oddCount = 0;
    for(int i=0;i<num;i++){
        if(arr[i] % 2 == 0){
            even[evenCount++] = arr[i];
        } else {
            odd[oddCount++] = arr[i];
        }
    }
    printf("Even Array: ");
    for(int i=0;i<evenCount;i++){
        printf("%d ", even[i]);
    }
    printf("\n");
    printf("Odd Array : ");
    for(int i=0;i<oddCount;i++){
        printf("%d ", odd[i]);
    }
    printf("\n");
    return 0;
}