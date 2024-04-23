#include<stdio.h>
void main(){
    int i,p,r,n;
    printf("NAME = SHUBHAM ROHTASH\n");
    printf("ENROLLMENT NUMBER = 202303103510052\n");
    printf("DIVISION = D\n");
    printf("Enter Principal amount=");
    scanf("%d",&p);     //principal amount
    printf("Enter Rate of Interest amount=");
    scanf("%d",&r);     //rate of interest
    printf("Enter Number of Years=");
    scanf("%d",&n);     //number of years
    i=(p*r*n)/100;      //Simple interest
    printf("Simple Interest=%d",i);
}