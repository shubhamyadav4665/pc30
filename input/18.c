#include <stdio.h>
void main()
{
int r1,c1,r2,c2,k;
printf("NAME = SHUBHAM ROHTASH\n");
printf("ENROLLMENT NUMBER = 202303103510052\n");
printf("DIVISION = D\n");
    printf("Enter m and n for matrix 1:");
    scanf("%d %d",&r1,&c1);
int i, j;
int mat1[r1][c1], mat2[r2][c2], mat3[r1][c1],mat4[r1][c1];
for(i = 0; i < r1; i++)
{
for(j = 0; j < c1; j++){
    printf("Enter elements of 1st matrix a[%d][%d]:",i+1,j+1);
    scanf("%d",&mat1[i][j]);
}
}
 printf("Enter m and n for matrix 2:");
    scanf("%d %d",&r2,&c2);
for(i = 0; i < r2; i++)
{
for(j = 0; j < c2; j++){
        printf("Enter elements of 2nd matrix a[%d][%d]:",i+1,j+1);
        scanf("%d",&mat2[i][j]);
}
}
if(r1==r2&&c1==c2){
for(i = 0; i < r1; i++)
{
for(j = 0; j < c1; j++)
{
mat3[i][j]=mat1[i][j]+mat2[i][j];
}
}
printf("sum of matrix:\n");
//print addtion
for(i = 0; i < r1; i++)
{
for(j = 0; j < c1; j++)
printf("a[%d][%d]=%d ",i+1,j+1,mat3[i][j]);
printf("\n");
}
}
else{
    printf("cant be added this two matrix;\n");
}

if(c1==r2){
for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            mat3[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                mat3[i][j] =mat3[i][j]+ mat1[i][k] * mat2[k][j];
            }
        }
    }
    printf("mult of matrix:\n");

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }
}
else {
    printf("cant be multiply this two matrix;");
}
}