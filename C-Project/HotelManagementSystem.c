#include <stdio.h>

int rooms[10]={0};
int choice;
int RoomNo;

void Menu(){
    printf("\n===== Hotel Management System =====\n");
    printf("1. View Room Status\n");
    printf("2. Book a Room\n");
    printf("3. Checkout a Room\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
}

void RoomStatus(){
    int available=0;
    printf("\n===== Room Status =====\n");
    for (int i=0;i<10;i++) {
        if (rooms[i]==0) {
            printf("Room %d is available.\n",i+1);
            available=1;
        }
    }
    if (!available){
        printf("No rooms available!\n");
    }
}

void BookRoom(){
    printf("\nEnter room number to book (1-10): ");
    scanf("%d",&RoomNo);
    if (RoomNo<1||RoomNo>10){
        printf("Invalid room number!\n");
    } else if (rooms[RoomNo-1]==1){
        printf("Room %d is already booked!\n",RoomNo);
    } else{
        rooms[RoomNo-1]=1;
        printf("Room %d is booked successfully.....\n",RoomNo);
    }
}

void CheckoutRoom(){
    printf("\nEnter room number to checkout (1-10): ");
    scanf("%d",&RoomNo);
    if (RoomNo<1||RoomNo>10){
        printf("Invalid room number!\n");
    } else if (rooms[RoomNo-1]==0){
        printf("Room %d is already available!\n",RoomNo);
    } else {
        rooms[RoomNo-1]=0;
        printf("Room %d is checked out successfully.....\n",RoomNo);
    }
}

void Exit(){
    printf("Thank you for using the Hotel Management System.....\n");
}

int main(){
    while(1){
        Menu();
        scanf("%d",&choice);

        switch (choice){
            case 1:
                RoomStatus();
                break;
            case 2:
                BookRoom();
                break;
            case 3:
                CheckoutRoom();
                break;
            case 4:
                Exit();
                return 0;
            default:
                printf("Invalid choice! Please try again.....\n");
        }
    }

    return 0;
}