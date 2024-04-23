#include<stdio.h>
void main(){
    int num_1,num_2,num_3;
    printf("NAME = SHUBHAM ROHTASH\n");
    printf("ENROLLMENT NUMBER = 202303103510052\n");
    printf("DIVISION = D\n");
    printf("Enter num_1 =");
    scanf("%d",&num_1);     //num1
    printf("Enter num_2 =");
    scanf("%d",&num_2);     //num2
    num_3=num_1;
    num_1=num_2;
    num_2=num_3;           //swapping 
    printf("num_1=%d \n num_2=%d",num_1,num_2);
}