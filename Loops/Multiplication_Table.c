// Multiplication table of a number
#include<stdio.h>
int main(){
    int num,count;
    printf("Enter the no. of terms:");
    scanf("%d",&count);
    printf("Entr a number for multiplication table:");
    scanf("%d",&num);
    printf("Multiplication Table of %d:\n",num);

    for (int i = 1; i <= count; i++)
    {
        printf("%d x %d = %d\n",num,i,num*i);
    }
    return 0;
}