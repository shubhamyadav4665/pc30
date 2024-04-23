#include<stdio.h>

int add(int, int); // function prototype

int main()
{
    int a, b;
    printf("NAME = SHUBHAM ROHTASH\n");
    printf("ENROLLMENT NUMBER = 202303103510052\n");
    printf("DIVISION = D\n");

    printf("Enter 2 integer numbers\n");
    scanf("%d%d", &a, &b);

    //function call add(a, b);
    printf("%d + %d = %d\n", a, b, add(a, b));

    return 0;
}

//function definition
int add(int x, int y)
{
    return(x+y);
}