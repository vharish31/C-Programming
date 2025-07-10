// To find lenght of the string

#include<stdio.h>
int main(){
    char string[1000];
    int len=0;
    printf("Enter a string : ");
    scanf("%s",&string);

    while(string[len]>0){
        len++;
    }
    
    printf("Length of string is %d",len);

    return 0;

}