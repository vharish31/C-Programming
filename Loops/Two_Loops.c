// Printing numbers from 0 to 10 and 10 to 0.
#include<stdio.h>
int main(){
    int i,j;
    printf("Numbers from 0 to 10:\n");
    for(i=0;i<=10;i++){
        printf("%d\n",i);
    }
    printf("\nNumbers from 10 to 0:\n");

    for(j=10;j>=0; j--){
        printf("%d\n",j);
    }
    return 0;
}