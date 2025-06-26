#include<stdio.h>
int main(){
    int std,total=0;
    printf("Enter your class (10th or 12th) : ");
    scanf("%d",&std);
    
    if (std==10){
        int tenmarks[5];
        printf("Enter your 10th Marks :\n");
        for (int i=0;i<5;i++){
            scanf("%d",&tenmarks[i]);
            total+=tenmarks[i];
        }
        printf("\nTotal Marks : %d\n",total);
    }

    else if (std==12){
        int twelve[6];
        printf("Enter your 12th Marks :\n");
        for (int i=0;i<6;i++){
            scanf("%d",&twelve[i]);
            total+=twelve[i];
        }
        printf("\nTotal Marks : %d\n",total);
    }

    else{
        printf("Invalid class.\n");
    }

    return 0;
    
}