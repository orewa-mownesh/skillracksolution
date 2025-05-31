#include <stdio.h>

int main() {
    char c;
    scanf(" %c", &c);

    if ((c >= '0' && c <= '9') || 
        (c >= 'a' && c <= 'f') || 
        (c >= 'A' && c <= 'F')) {
        printf("Valid\n");
    } else {
        printf("Invalid\n");
    }

    return 0;
}
