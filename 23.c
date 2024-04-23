#include<stdio.h>
#include<stdlib.h>

int main()
{ 

 int n,i;
printf("NAME = SHUBHAM ROHTASH\n");
printf("ENROLLMENT NUMBER = 202303103510052\n");
printf("DIVISION = D\n");

 printf("Enter the size or the number of chracters that you want to enter inside the string.\n");
 scanf("%d",&n);

 char *p = (char*)malloc((n+1)*sizeof(char));
 if(p==NULL)
 {
 printf("Memory allocation fails..");
 exit(0);
 }
 
 puts("Enter string");
  for(i=0;i<(n+1);i++)
  scanf("%c",p+i);

 *(p+i)= '\0';

 printf("String entered %s",p);

 fflush(stdin);

 printf("\nEnter new size\n");
 scanf(" %d",&n); 

 p = realloc(p,(n+1)*sizeof(char));

 puts("Enter new string");
 scanf("%d", &n);

 for(i=0;i<(n+1);i++)
 scanf("%c",p+i);
 
 *(p+i)= '\0'; 
 
 printf("New string \n%s",p);
 
 free(p);
 
 return 0;
}
