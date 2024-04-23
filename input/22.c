#include <stdio.h>
void main() {
    char str1[100],str2[100];
    printf("NAME = SHUBHAM ROHTASH\n");
    printf("ENROLLMENT NUMBER = 202303103510052\n");
    printf("DIVISION = D\n");
    printf("Enter first string:");
    scanf("%s",&str1);
    printf("Enter secound string:");
    scanf("%s",&str2);
    
    strcat(str1,str2);
    printf("joined string:%s",str1);
}

   
