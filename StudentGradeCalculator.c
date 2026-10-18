//StudentGradeCalculator
#include <stdio.h>

int main() {
    char name[100];
    float mark1, mark2, mark3, average;
    char grade;

    printf("Enter student name: ");
    scanf(" %99[^\n]", name);

    printf("Enter marks for 3 subjects: ");
    scanf("%f %f %f", &mark1, &mark2, &mark3);

    average = (mark1 + mark2 + mark3) / 3.0f;

    if (average >= 80) {
        grade = 'A';
    } else if (average >= 70) {
        grade = 'B';
    } else if (average >= 60) {
        grade = 'C';
    } else if (average >= 50) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    printf("\n--- Student Result ---\n");
    printf("Name: %s\n", name);
    printf("Average: %.2f\n", average);
    printf("Grade: %c\n", grade);

    return 0;
}
