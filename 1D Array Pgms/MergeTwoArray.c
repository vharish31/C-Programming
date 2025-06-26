// Merge two arrays into a third array
#include<stdio.h>
int main(){
    int num1;
    printf("Enter the no. of elements for 1st array: ");
    scanf("%d", &num1);
    int arr1[num1];
    printf("Enter the elements for the 1st array: \n");
    for(int i=0;i<num1;i++){
        scanf("%d",&arr1[i]);
    }
    int num2;
    printf("Enter the no. of elements for 2nd array: ");
    scanf("%d", &num2);
    int arr2[num2];
    printf("Enter the elements for the 2nd array: \n");
    for(int i=0;i<num2;i++){
        scanf("%d",&arr2[i]);
    }
    int num3 = num1 + num2;
    int arr3[num3];
    for(int i=0;i<num1;i++){
        arr3[i] = arr1[i];
    }
    for(int i=0;i<num2;i++){
        arr3[num1+i] = arr2[i];
    }
    printf("Merged array: ");
    for(int i=0;i<num3;i++){
        printf("%d ", arr3[i]);
    }
    printf("\n");
    return 0;
}