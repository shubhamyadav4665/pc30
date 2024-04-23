#include <stdio.h>
void swap(int x,int y);
void main()
{
    int a,b;
    printf("NAME = SHUBHAM ROHTASH\n");
    printf("ENROLLMENT NUMBER = 202303103510052\n");
    printf("DIVISION = D\n");
    printf("Enter value of a and b:");
    scanf("%d%d",&a,&b);
    swap(a,b);
    
}
void swap(int x,int y)
{
    int temp;
    temp= x;
    x = y;
    y = temp;
    printf("after swapping x=%d y=%d",x,y);
}