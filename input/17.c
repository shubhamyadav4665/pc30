#include<stdio.h>
void main(){
char i,j;
printf("NAME = SHUBHAM ROHTASH\n");
printf("ENROLLMENT NUMBER = 202303103510052\n");
printf("DIVISION = D\n");
for(i='A';i<='E';i++)
{
     for(j='A';j<=i;j++){
      printf("%c",j);
     }
     printf("\n");
}

}