#include <stdio.h>
#include <string.h> 
int main()
{
  	char str[100];
  	int i;
	printf("NAME = SHUBHAM ROHTASH\n");
    printf("ENROLLMENT NUMBER = 202303103510052\n");
    printf("DIVISION = D\n");
  	printf("\n Please Enter any String: ");
  	scanf("%s",&str);
  	for (i = 0;i<strlen(str); i++)
  	{
  	    if(str[i] >= 'A' && str[i] <= 'Z') 
              str[i] = str[i] + 32; 
        else if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    	}
  	printf("\n Toglled string: %s", str);
  	return 0;
}