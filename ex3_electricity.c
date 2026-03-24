/* ADAKU NOBERT MENDEL */
/* Student Number: 25/U/BIO/01351/PD */

#include <stdio.h>
int main() {
    float units, cost_per_unit, total_bill;

    printf("Enter units consumed: ");
    scanf("%f", &units);

    printf("Enter cost per unit: ");
    scanf("%f", &cost_per_unit);

    // Calculation: units * cost
    total_bill = units * cost_per_unit;

    printf("Total bill: %.2f UGX\n", total_bill);

    return 0;
}