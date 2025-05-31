#include <stdio.h>

int main() {
    int s;
    double hra_percent, da_percent;
    double hra, da, gross_salary;

    scanf("%d", &s);

    if (s <= 10000) {
        hra_percent = 20.0;
        da_percent = 80.0;
    } else if (s <= 20000) {
        hra_percent = 25.0;
        da_percent = 90.0;
    } else {
        hra_percent = 30.0;
        da_percent = 95.0;
    }

    hra = s * (hra_percent / 100.0);
    da = s * (da_percent / 100.0);
    gross_salary = s + hra + da;

    printf("%.2f\n", gross_salary);

    return 0;
}
