#include <stdio.h>
#include <stdlib.h>
typedef struct {
char name[50];
int roll_no;
char address[100];
} Student;
void fetch_record(char *filename) {
FILE *file = fopen(filename, "r");
if (file == NULL) {
printf("Error opening file!\n");
exit(1);
}
Student student;
while (fread(&student, sizeof(Student), 1, file) == 1) {
printf("Name: %s\n", student.name);
printf("Roll No: %d\n", student.roll_no);
printf("Address: %s\n", student.address);
printf("\n");
}
fclose(file);
}
int main() {
Student student;
printf("NAME = SHUBHAM ROHTASH\n");
printf("ENROLLMENT NUMBER = 202303103510052\n");
printf("DIVISION = D\n");
FILE *file = fopen("student_data.txt", "w");
if (file == NULL) {
printf("Error opening file!\n");
exit(1);
}
for (int i = 0; i < 10; i++) {
printf("Enter student name: ");
scanf("%s", student.name);
printf("Enter student roll no: ");
scanf("%d", &student.roll_no);
printf("Enter student address: ");
scanf("%s", student.address);
fwrite(&student, sizeof(Student), 1, file);
}
fclose(file);
printf("Student records fetched from the file:\n");
fetch_record("student_data.txt");
return 0;
}
