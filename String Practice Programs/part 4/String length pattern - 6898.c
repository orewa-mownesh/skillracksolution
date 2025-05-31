#include <stdio.h>
#include <string.h>

int main() {
    char s1[101], s2[101];
    char input[202];
    
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%s %s", s1, s2);

    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int max_len = (len1 > len2) ? len1 : len2;

    for (int i = 0; i < max_len; i++) {
        if (i < len1 && i < len2) {
            printf("%c%c\n", s1[i], s2[i]);
        } else if (i < len1) {
            printf("%c*\n", s1[i]);
        } else {
            printf("*%c\n", s2[i]);
        }
    }

    return 0;
}
