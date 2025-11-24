#ifndef GUEST_H
#define GUEST_H

// This structure holds all basic guest information
struct Guest {
    int guest_id;               // Unique ID for each guest
    char name[50];             // Guest full name
    int room_no;               // Room number assigned
    char meal_type[10];        // Veg / Non-Veg choice
    char service_type[20];     // Room service or Self service
    char buffet_type[15];      // Breakfast / Lunch / Dinner
    char payment_method[20];   // Cash / Card / UPI
};

// Function to add a new guest record
void addGuest();

// Function to display all guest records
void displayGuests();

#endif
