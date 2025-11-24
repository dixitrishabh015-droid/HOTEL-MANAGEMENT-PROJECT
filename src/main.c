#include <stdio.h>
#include <stdlib.h>
#include "guest.h"      // For guest-related functions
#include "room.h"       // For room-related functions
#include "services.h"   // For services (meal, buffet) related functions

int main() {
    int choice;

    while (1) {
        printf("\n========= HOTEL MANAGEMENT SYSTEM =========\n");
        printf("1. Add Guest Details\n");
        printf("2. Display All Guests\n");
        printf("3. Assign Room\n");
        printf("4. Food & Services\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addGuest();          // Function from guest.c
                break;
            case 2:
                displayGuests();     // Function from guest.c
                break;
            case 3:
                assignRoom();        // Function from room.c
                break;
            case 4:
                hotelServices();     // Function from services.c
                break;
            case 5:
                printf("\nExiting program...\n");
                exit(0);
            default:
                printf("\nInvalid choice! Please try again.\n");
        }
    }

    return 0;
}
