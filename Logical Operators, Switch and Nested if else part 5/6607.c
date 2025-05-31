#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int magic_items = 0;
    int jewels = 0;

    if (a>=0&&a % 2 == 0) {
        magic_items++;
    } else {
        jewels++;
    }

    if (b>=0&&b % 2 == 0) {
        magic_items++;
    } else {
        jewels++;
    }

    if (c>=0&&c % 2 == 0) {
        magic_items++;
    } else {
        jewels++;
    }

    if (magic_items >= 2) {
        printf("YES\n");
    } else if (magic_items == 1 && jewels > 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
