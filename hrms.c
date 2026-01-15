/*
Link to repo: https://github.com/Adrian-kip/Hotel-Management-System

Group Members and Registration Numbers:

1. Cheruiyot Adrian Kiptoo - SCS3/150223/2025
2. Hassan Mariam Ali       - SCS3/151019/2025
3. Griffin Marusoi         - SCS3/150399/2025
4. Ahmed Saadiq            - SCS3/151038/2025
5. Luqman Bashir Amin      - SCS3/151046/2025
*/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_NAME "customers.txt"

struct Customer {
    char name[50];
    char id[20];
    int roomType;
    int nights;
    float bill;
};

void menu();
void bookRoom();
void viewRecords();
void cancelBooking();
float calculateBill(int roomType, int nights);

int main() {
    menu();
    return 0;
}

void menu() {
    int choice;
    do {
        printf("\n--- HOTEL ROOM MANAGEMENT SYSTEM ---\n");
        printf("1. Book a Room\n");
        printf("2. View Customer Records\n");
        printf("3. Cancel Booking\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: bookRoom(); break;
            case 2: viewRecords(); break;
            case 3: cancelBooking(); break;
            case 4: printf("Exiting system...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while(choice != 4);
}