// C Program to print Right Angled Stars
#include<stdio.h>
int main(){
    int rows;
    printf("Enter no of rows:");
    scanf("%d",&rows);

    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}