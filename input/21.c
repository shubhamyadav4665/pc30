#include <stdio.h>
#include <string.h>

void main() {
    char s[100], c, r;
    printf("NAME = SHUBHAM ROHTASH\n");
    printf("ENROLLMENT NUMBER = 202303103510052\n");
    printf("DIVISION = D\n");

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    if (s[strlen(s) - 1] == '\n') {
        s[strlen(s) - 1] = '\0';
    }



    printf("Enter a character to find: ");
    scanf(" %c", &c);

    int found = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("'%c' found in the string.\n", c);
    else
        printf("'%c' not found in the string.\n", c);

    printf("Enter a character to replace: ");
    scanf(" %c", &c);

    printf("Enter a replacement character: ");
    scanf(" %c", &r);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c)
            s[i] = r;
    }

    printf("After replacing '%c' with '%c': %s\n", c, r, s);

        for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;
    }
    printf("Uppercase string: %s\n", s);
    
    int len = strlen(s);
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    printf("Reversed string: %s\n", s);
    
}
