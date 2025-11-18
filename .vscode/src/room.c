#include <stdio.h>
#include "room.h"

void assignRoom() {
    int roomNo, days;
    char roomType[20];
    char acType[10];
    float pricePerNight, total;

    printf("\n========= ROOM ASSIGNMENT =========\n");

    printf("Enter Room Number: ");
    scanf("%d", &roomNo);

    printf("Enter Room Type (single/double/deluxe): ");
    scanf("%s", roomType);

    printf("AC Type (ac/nonac): ");
    scanf("%s", acType);

    printf("Enter Price per Night: ");
    scanf("%f", &pricePerNight);

    printf("Enter Number of Days Stay: ");
    scanf("%d", &days);

    total = pricePerNight * days;

    printf("\nRoom Assigned Successfully!\n");
    printf("Room No          : %d\n", roomNo);
    printf("Room Type        : %s\n", roomType);
    printf("AC Type          : %s\n", acType);
    printf("Days of Stay     : %d\n", days);
    printf("Total Room Charge: %.2f\n", total);
}
