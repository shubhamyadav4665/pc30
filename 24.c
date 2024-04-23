#include<stdio.h>
struct person
{
   char name[20];
   char doj[10];
   float salary;
}p[5];

int main(void)
{
   int i=0;
   printf("NAME = SHUBHAM ROHTASH\n");
   printf("ENROLLMENT NUMBER = 202303103510052\n");
   printf("DIVISION = D\n");

   for(i=0;i<1;i++)
   {
      printf("\n Enter person name :");
      scanf("%s", p[i].name);
      printf("\n Person Date of joining(dd-mm-yyyy) : ");
      scanf("%s",p[i].doj);
      printf("\n Enter person salary : ");
      scanf("%f",&p[i].salary);
   }

   for(i=0;i<1;i++)
   {
      printf("\n Person %d Detail",i+1);
      printf("\n Name = %s",p[i].name);
      printf("\n DOJ = %s",p[i].doj);
      printf("\n Salary = %.2f",p[i].salary);
   }
   return 0;
}
    
