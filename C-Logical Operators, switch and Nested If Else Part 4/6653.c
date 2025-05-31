#include <stdio.h>

int main() {
    int country_code;
    long long mobile_number;
    scanf("%d %lld", &country_code, &mobile_number);

    char country_name[20];
    char operator_name[20];
    int valid = 1;

    if (country_code == 91) {
        sprintf(country_name, "India");
    } else if (country_code == 92) {
        sprintf(country_name, "Pakistan");
    } else if (country_code == 94) {
        sprintf(country_name, "Sri Lanka");
    } else if (country_code == 977) {
        sprintf(country_name, "Nepal");
    } else {
        valid = 0;
    }

    if (valid) {
        long long int first_digit = mobile_number;
        while (first_digit >= 10) {
            first_digit /= 10;
        }

        if (first_digit == 9 || first_digit == 8) {
            sprintf(operator_name, "Airtel");
        } else if (first_digit == 6 || first_digit == 7) {
            sprintf(operator_name, "Jio");
        } else {
            valid = 0;
        }
    }

    if (valid) {
        printf("%s %s\n", country_name, operator_name);
    } else {
        printf("INVALID\n");
    }

    return 0;
}
