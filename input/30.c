#include <stdio.h>

void decimalToBinary(int decimal){
    if(decimal > 0){
        decimalToBinary(decimal/2);
        printf("%d",decimal % 2);
    }
}

int main(){
    int decimal;
   printf("NAME = SHUBHAM ROHTASH\n");
    printf("ENROLLMENT NUMBER = 202303103510052\n");
    printf("DIVISION = D\n");
    printf("Enter a decimal number : ");
    scanf("%d",&decimal);
    
    if(decimal < 0){
        printf("Binary representation is not defined for negative numbers.\n");
    }else {
        printf("Binary representation of %d : ",decimal);
        decimalToBinary(decimal);
        printf("\n");
    }
    return 0;
}
