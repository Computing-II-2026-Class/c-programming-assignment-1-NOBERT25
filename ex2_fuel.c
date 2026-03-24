/* ADAKU NOBERT MENDEL */
/* Student Number: 25/U/BIO/01351/PD */

#include <stdio.h>
int main() {
    float distance, fuel_used, efficiency;
    printf("Enter distance (km): ");
    scanf("%f", &distance);

    printf("Enter fuel used (litres): ");
    scanf("%f", &fuel_used);
    // Calculation: distance / fuel
    efficiency = distance / fuel_used;
    printf("Fuel efficiency: %.2f km/l\n", efficiency);

    return 0;
}