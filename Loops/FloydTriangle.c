#include<stdio.h>
int main(){
    int rows,num=1;
    printf("Enter no of rows:");
    scanf("%d",&rows);

    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            printf("%d",num);
            num++;
        }
        printf("\n");
    }
    return 0;
}