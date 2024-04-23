#include <stdio.h> 
#include <limits.h> 
 
int main() { 
	int matrix[3][3]; 
	printf("NAME = SHUBHAM ROHTASH\n");
    printf("ENROLLMENT NUMBER = 202303103510052\n");
    printf("DIVISION = D\n");
 
	printf("Enter the elements one-by-one:\n"); 
	for(int row = 0; row < 3; row++) { 
		for(int col = 0; col < 3; col++) { 
			printf("%d %d: ", row+1, col+1); 
			scanf("%d", &matrix[row][col]); 
			printf("\n"); 
		} 
	} 
 	int max=matrix[0][0]; 
	for(int i = 0; i < 3; i++){ 
		for(int j = 0; j < 3; j++) { 
			if(matrix[i][j] > max) 
				max = matrix[i][j]; 
		} 
	} 
 
	printf("Maximum Value: %d",max); 
 
	return 0; 
} 