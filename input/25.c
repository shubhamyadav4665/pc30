#include <stdio.h>
#include <string.h>

void main() {
    char s[100];
    printf("NAME = SHUBHAM ROHTASH\n");
    printf("ENROLLMENT NUMBER = 202303103510052\n");
    printf("DIVISION = D\n");
    printf("Enter a string: ");
    scanf("%s", s);

    int l = strlen(s);
    int p = 1;

    for (int i = 0; i < l / 2; ++i) {
        if (s[i] != s[l - 1 - i]) {
            p = 0;
            break;
        }
    }

    if (p) {
        printf("Palindrome.\n");
    } else {
        printf("Not a palindrome.\n");
    }
}
