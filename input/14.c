#include<stdio.h>
void main() {
  int student,sum,marks,sub;
  printf("NAME = SHUBHAM ROHTASH\n");
    printf("ENROLLMENT NUMBER = 202303103510052\n");
    printf("DIVISION = D\n");
  for (student = 0; student < 5; student++) {
    sum = 0;
    printf("Enter Marks for Student - %d \n",student + 1);
    for (sub = 0;sub<3;sub++) {
      printf("Enter Marks for Subject - %d ",sub + 1);
      scanf("%d",&marks);
      sum=sum+marks;
    }
    printf("For Student - %d : \n",student +1);
    printf("Sum = %d\n",sum);
    printf("Average = %.2f\n",((float) sum)/sub);
  }
}
