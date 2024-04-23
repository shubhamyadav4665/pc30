#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    char address[100];
};

void fetch_record() {
    FILE *file = fopen("student_data.txt", "r");
    if (file == NULL) {
        printf("File not found or unable to open.\n");
        return;
    }

    struct Student student;
    printf("\nStudent Records:\n");

    while (fread(&student, sizeof(struct Student), 1, file)) {
        printf("Name: %s\nRoll Number: %d\nAddress: %s\n\n", student.name, student.roll_no, student.address);
    }

    fclose(file);
}

int main() {
    printf("NAME = SHUBHAM ROHTASH\n");
    printf("ENROLLMENT NUMBER = 202303103510052\n");
    printf("DIVISION = D\n");
    FILE *file = fopen("student_data.txt", "w");
    if (file == NULL) {
        printf("File not found or unable to open.\n");
        return 1;
    }

    struct Student students[10];

    printf("Enter details for 10 students:\n");
    for (int i = 0; i < 10; ++i) {
        printf("Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Address: ");
        scanf("%s", students[i].address);
        printf("\n");

        fwrite(&students[i], sizeof(struct Student), 1, file);
    }

    fclose(file);
    fetch_record();

    return 0;
}
