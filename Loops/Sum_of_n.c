// Sum of first n natural numbers
#include<stdio.h>
int main(){
    int sum=0,num;
    printf("Enter no. of terms:\n");
    scanf("%d",&num);

    for (int i = 0; i <=num; i++)
    {
        sum+=i;
    }
    printf("The sum of first %d natural numbers is %d",num,sum);
    return 0;
    
}