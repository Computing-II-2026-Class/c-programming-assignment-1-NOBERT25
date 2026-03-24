/* ADAKU NOBERT MENDEL*/
/* Student Number: 25/U/BIO/01351/PD */

#include <stdio.h>

int main() {
    float amount, fee_percent, fee_amount, total_deducted;

    printf("Enter amount to send: ");
    scanf("%f", &amount);
    printf("Enter transaction fee (%%): ");
    scanf("%f", &fee_percent);
    // Calculation: (percentage / 100) * amount
    fee_amount = (fee_percent / 100) * amount;
    total_deducted = amount + fee_amount;
    printf("\n----- TRANSACTION SUMMARY -----\n");
    printf("Amount Sent: %.2f UGX\n", amount);
    printf("Fee: %.2f UGX\n", fee_amount);
    printf("Total Deducted: %.2f UGX\n", total_deducted);
    printf("-------------------------------\n");
    return 0;
}
