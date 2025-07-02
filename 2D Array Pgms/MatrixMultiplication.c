#include<stdio.h>
int main(){
    int r1,c1;
    printf("Enter the no. of rows for Matrix 1    : ");
    scanf("%d",&r1);
    printf("Enter the no. of columns for Matrix 1 : ");
    scanf("%d",&c1);

    int m1[r1][c1];
    printf("Enter %d elements row-wise for Matrix 1:\n", r1*c1);
    for (int i = 0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&m1[i][j]);
        }
    }

    printf("The Matrix 1 is:\n");
    for (int i=0;i<r1;i++) {
        for (int j=0;j<c1;j++) {
            printf("%d ",m1[i][j]);
        }
        printf("\n");
    }

    int r2,c2;
    printf("Enter the no. of rows for Matrix 2    : ");
    scanf("%d",&r2);
    printf("Enter the no. of columns for Matrix 2 : ");
    scanf("%d",&c2);

    int m2[r2][c2];
    printf("Enter %d elements row-wise for Matrix 2:\n", r2*c2);
    for (int i=0;i<r2;i++) {
        for (int j=0;j<c2;j++) {
            scanf("%d", &m2[i][j]);
        }
    }

    printf("The Matrix 2 is:\n");
    for (int i=0;i<r2;i++) {
        for (int j=0;j<c2;j++) {
            printf("%d ",m2[i][j]);
        }
        printf("\n");
    }

    if (c1 == r2) {
        int m3[r1][c2];
        for (int i=0;i<r1;i++) {
            for (int j=0;j<c2;j++) {
                m3[i][j] = 0;
                for (int k=0;k<c1;k++) {
                    m3[i][j] += m1[i][k] * m2[k][j];
                }
            }
        }
        printf("The resultant Matrix after Matrix multiplication is:\n");
        for (int i=0;i<r1;i++) {
            for (int j=0;j<c2;j++) {
                printf("%d ",m3[i][j]);
            }
            printf("\n");
        }
    }

    else{
        printf("No. of columns in Matrix 1 is not equal to the no. of rows in Matrix 2.\nSo, Matrix Multiplication is not possible.\n");
    }
    
    return 0;
    
}