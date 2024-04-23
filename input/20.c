#include <stdio.h>

void main() {
    int s;
    printf("NAME = SHUBHAM ROHTASH\n");
    printf("ENROLLMENT NUMBER = 202303103510052\n");
    printf("DIVISION = D\n");
  

    printf("Enter size: ");
    scanf("%d", &s);

    int arr[s];

    printf("Enter %d elements:\n", s);
    for (int i = 0; i < s; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < s - 1; i++)
        for (int j = 0; j < s - i - 1; j++)
            if (arr[j] > arr[j + 1]) {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }

    printf("Ascending: ");
    for (int i = 0; i < s; i++)
        printf("%d ", arr[i]);
    printf("\n");

    for (int i = 0; i < s - 1; i++)
        for (int j = 0; j < s - i - 1; j++)
            if (arr[j] < arr[j + 1]) {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }

    printf("Descending: ");
    for (int i = 0; i < s; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
