#include <stdio.h>
#include <string.h>
#include "guest.h"

// Maximum number of guests
#define MAX_GUESTS 100

// Create a global array to store guest records
struct Guest guests[MAX_GUESTS];
int totalGuests = 0;

// Function to add guest information
void addGuest() {
    if (totalGuests >= MAX_GUESTS) {
        printf("\n❌ Maximum guest limit reached!\n");
        return;
    }

    printf("\n====== ADD GUEST DETAILS ======\n");
    
    printf("Enter Guest ID: ");
    scanf("%d", &guests[totalGuests].guest_id);

    printf("Enter Guest Name: ");
    scanf("%s", guests[totalGuests].name);

    printf("Enter Room Number: ");
    scanf("%d", &guests[totalGuests].room_no);

    printf("Meal Type (veg/nonveg): ");
    scanf("%s", guests[totalGuests].meal_type);

    printf("Service Type (room/self): ");
    scanf("%s", guests[totalGuests].service_type);

    printf("Buffet Type (breakfast/lunch/dinner): ");
    scanf("%s", guests[totalGuests].buffet_type);

    printf("Payment Method (cash/card/upi): ");
    scanf("%s", guests[totalGuests].payment_method);

    totalGuests++;
    printf("\n✔ Guest added successfully!\n");
}

// Function to display all guest records
void displayGuests() {
    if (totalGuests == 0) {
        printf("\n⚠ No guest records found!\n");
        return;
    }

    printf("\n================ HOTEL GUEST LIST ================\n");
    printf("ID\tName\tRoom\tMeal\tService\tBuffet\tPayment\n");
    printf("---------------------------------------------------\n");

    for (int i = 0; i < totalGuests; i++) {
        printf("%d\t%s\t%d\t%s\t%s\t%s\t%s\n",
            guests[i].guest_id,
            guests[i].name,
            guests[i].room_no,
            guests[i].meal_type,
            guests[i].service_type,
            guests[i].buffet_type,
            guests[i].payment_method
        );
    }
}
