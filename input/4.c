#include<stdio.h>
void main(){
    float dis,meter,feet,inch,centimeter;
    printf("NAME = SHUBHAM ROHTASH\n");
    printf("ENROLLMENT NUMBER = 202303103510052\n");
    printf("DIVISION = D\n");
    printf("Enter Distance in Kilometer=");
    scanf("%f",&dis);     //Distance in Kilometer
    meter=dis*1000;
    feet=dis*3280.84;
    inch=dis*39370.1;
    centimeter=dis*100000;
   
    printf("Meter=%.2f\n",meter);
    printf("Feet=%.2f\n",feet);
    printf("Inch=%.2f\n",inch);
    printf("centimeter=%.2f\n",centimeter);
}