/**
 * C program to create, initialize and use pointers
 */

#include <stdio.h>

int main()
{
    int num = 10;
    int * ptr;
    printf("NAME = SHUBHAM ROHTASH\n");
    printf("ENROLLMENT NUMBER = 202303103510052\n");
    printf("DIVISION = D\n");

    /* Stores the address of num to pointer type */
    ptr = &num;

    printf("Address of num = %d\n", &num);
    printf("Value of num = %d\n", num);

    printf("Address of ptr = %d\n", &ptr);
    printf("Value of ptr = %d\n", ptr);
    printf("Value pointed by ptr = %d\n", *ptr);

    return 0;
}
