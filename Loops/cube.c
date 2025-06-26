// Cubes of numbers fro 1 to 5
#include<stdio.h>
int main(){
    int cube;
    for (int i = 1; i<=5; i++)
    {
        cube=i*i*i;
        printf("Cube of %d = %d\n",i,cube);
    }
    return 0;
}