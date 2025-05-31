#include <stdio.h>

int main() {
    int a, b, x;
    scanf("%d %d %d", &a, &b, &x);

    if (x % 100 != 0) {
        printf("Invalid Amount\n");
    } else {
        int total_atm_money = (a * 100) + (b * 500);
        if (x > total_atm_money) {
            printf("Insufficient Money\n");
        } else {
            // Check if amount X can be disbursed with available denominations
            // Prioritize 500 rupee notes to reduce the count, then use 100 rupee notes
            int num_500 = x / 500;
            int remaining_x = x % 500;

            if (num_500 <= b) { // Enough 500 notes
                if (remaining_x == 0 || (remaining_x / 100) <= a) {
                    printf("Collect Your Cash\n");
                } else {
                    printf("Insufficient Money\n");
                }
            } else { // Not enough 500 notes, use all available 500s and then 100s
                remaining_x = x - (b * 500);
                if (remaining_x >= 0 && (remaining_x % 100 == 0) && (remaining_x / 100) <= a) {
                    printf("Collect Your Cash\n");
                } else {
                    printf("Insufficient Money\n");
                }
            }
        }
    }

    return 0;
}
