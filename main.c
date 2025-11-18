#include <stdio.h>
#include <string.h>

struct Guest {
    int guest_id;
    char name[50];
    int room_no;
    char meal_type[10];       // Veg / Non-Veg
    char service_type[20];    // Room service / Self service
    char buffet_type[15];     // Breakfast / Lunch / Dinner
    char payment_method[20];  // Cash / Card / UPI
};
void addGuest(struct Guest g[], int *n) {
    printf("\nEnter Guest ID: ");
    scanf("%d", &g[*n].guest_id);
    printf("Enter Guest Name: ");
    scanf("%s", g[*n].name);
    printf("Enter Room Number: ");
    scanf("%d", &g[*n].room_no);

    printf("Meal Type (veg/nonveg): ");
    scanf("%s", g[*n].meal_type);