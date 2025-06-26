// Read 10 numbers from the user and print their sum and average
#include<stdio.h>
int main(){
    int num[10],sum=0;
    float avg;
    printf("Enter any 10 numbers:\n");

    for (int i = 1; i <=10; i++)
    {
        printf("Num %d:",i);
        scanf("%d",&num[i]);
        sum+=num[i];
    }
    printf("Sum=%d\n",sum);
    avg=sum/10.0;
    printf("Average=%2f",avg);
    
return 0;
}