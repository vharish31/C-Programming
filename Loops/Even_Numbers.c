// Printing n even numbers
#include<stdio.h>
int main(){
    printf("Even numbers from 1 to 20:\n");

    for (int i = 1; i<=20; i++)
    {
        if (i%2==0)
        {
            printf("%d\n",i);
        }
        
    }
    return 0;
}