#include<stdio.h>
void main(){
    int maths,sci,comp,avg;
    printf("NAME = SHUBHAM ROHTASH\n");
    printf("ENROLLMENT NUMBER = 202303103510052\n");
    printf("DIVISION = D\n");
      printf("Enter Your marks\n");
      printf("maths=");
      scanf("%d",&maths);
      printf("sci=");
      scanf("%d",&sci);
      printf("comp=");
      scanf("%d",&comp);
      avg=(maths+sci+comp)/3;
      if(avg>=90){
            printf("Your Grade:A1\n");
      }
      else if(avg>=80){
         printf("Your Grade:A2\n");
      }
      else if(avg>=70){
         printf("Your Grade:B1\n");
      }
      else if(avg>=60){
         printf("Your Grade:B2\n");
      }
      else if(avg>=50){
         printf("Your Grade:C\n");
      }
      else if(avg>=40){
         printf("Your Grade:D\n");
      }
      else if(avg<33){
         printf("Fail\n");
      }
      else
      printf("enter correct no.\n");
      
          
}