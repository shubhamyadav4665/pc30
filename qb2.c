#include <stdio.h>

void main() {
    int a[3][3], b[3][3], c[3][3], i, j;
    printf("NAME = YADAV AASHUTOSH RAJESHKUMAR\n");
    printf("ENROLLMENT NUMBER = 202303103510005\n");
    printf("DIVISION = D\n");

    printf("Enter the 1st matrix: \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the 2nd matrix: \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    printf("The 1st matrix is: \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("The 2nd matrix is: \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    printf("The sum of the two matrices is: \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    printf("The Mmultiplication of the two matrices is: \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            c[i][j] = a[i][j] * b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}
