// Factorial of n numbers
#include<stdio.h>
int main(){
    int fact=1,num;
    printf("Enter the no. of terms:\n");
    scanf("%d",&num);
    for (int i = 1; i <=num; i++)
    {
        fact*=i;
    }
    printf("Factorial of %d is %d",num,fact);
    return 0;
}