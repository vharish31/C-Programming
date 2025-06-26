// C Program to print Square of Stars
#include<stdio.h>
int main(){
    int rows,cols;
    printf("Enter no of rows:");
    scanf("%d",&rows);
    printf("Enter no of columns:");
    scanf("%d",&cols);

    for(int i=1;i<=rows;i++){
        for(int j=1;j<=cols;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}