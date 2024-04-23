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
      if(avg>=80){
            printf("Your Grade:Distinction\n");
      }
      else if(avg>=60){
         printf("Your Grade:First Class\n");
      }
      else if(avg>=40){
         printf("Your Grade:Second Class\n");
      }
      else if(avg<40){
         printf("Your Grade:Fail\n");
      }
      else
      printf("enter correct no.\n");
      
          
}