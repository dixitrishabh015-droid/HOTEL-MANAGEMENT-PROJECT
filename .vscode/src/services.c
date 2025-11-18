#include <stdio.h>
#include <string.h>
#include "services.h"

void hotelServices() {
    int roomNo;
    char mealType[10];      // veg / nonveg
    char buffetType[15];    // breakfast / lunch / dinner
    char roomService[5];    // yes / no
    float amount = 0;

    printf("\n========= HOTEL SERVICES (FOOD) =========\n");

    printf("Enter Room Number: ");
    scanf("%d", &roomNo);

    printf("Meal Type (veg/nonveg): ");
    scanf("%s", mealType);

    printf("Buffet Type (breakfast/lunch/dinner): ");
    scanf("%s", buffetType);

    printf("Room Service? (yes/no): ");
    scanf("%s", roomService);

    // Simple pricing logic
    if (strcmp(buffetType, "breakfast") == 0) {
        amount = 300;
    } else if (strcmp(buffetType, "lunch") == 0) {
        amount = 500;
    } else if (strcmp(buffetType, "dinner") == 0) {
        amount = 600;
    } else {
        amount = 0;
    }

    if (strcmp(roomService, "yes") == 0) {
        amount += 100;   // extra room service charge
    }

    printf("\n------ SERVICE SUMMARY ------\n");
    printf("Room Number   : %d\n", roomNo);
    printf("Meal Type     : %s\n", mealType);
    printf("Buffet Type   : %s\n", buffetType);
    printf("Room Service  : %s\n", roomService);
    printf("Total Charge  : %.2f\n", amount);
}
