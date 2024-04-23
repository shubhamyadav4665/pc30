#include<stdio.h>
void main(){
    int n;
    printf("NAME = SHUBHAM ROHTASH\n");
    printf("ENROLLMENT NUMBER = 202303103510052\n");
    printf("DIVISION = D\n");
    printf("Enter Number=");
    scanf("%d",&n);     //number
    if(n>0){
    printf("Positive");
    }
    else if(n<0){
    printf("Negative");
    }
    else
    printf("Zero");
    
}