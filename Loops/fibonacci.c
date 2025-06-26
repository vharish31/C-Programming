#include<stdio.h>
int main(){
    int a=-1,b=1,c;
    printf("\nThe Fibonacci series of first 10 numbers :");
    for (int i = 0;i<=10;i++)
    {
        c=a+b;
        printf("\n%d",c);
        a=b;
        b=c;
    }
    return 0;
}