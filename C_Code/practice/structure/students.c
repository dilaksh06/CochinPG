#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[100];
    char roll_no[50];
    float marks[5]; // Marks should be floats
};

int main() {
    struct Student students[2];
    float highest_total = 0;
    int highest_total_index = 0;
    float highest_individual_marks = 0;
    int highest_individual_marks_index = 0;

    // Input the details of the students
    for (int i = 0; i < 2; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Enter the name of the student: ");
        scanf(" %[^\n]s", students[i].name); // Read string with spaces

        printf("Enter the roll_no: ");
        scanf(" %[^\n]s", students[i].roll_no);

        float total_marks = 0;
        for (int y = 0; y < 5; y++) {
            printf("Enter mark %d: ", y + 1);
            scanf("%f", &students[i].marks[y]);
            total_marks += students[i].marks[y];  // Add to total marks for the student

            // Check if this student has the highest individual mark in this subject
            if (students[i].marks[y] > highest_individual_marks) {
                highest_individual_marks = students[i].marks[y];
                highest_individual_marks_index = i;
            }
        }

        // Calculate average marks
        float average_marks = total_marks / 5;

        // Display the total and average marks for this student
        printf("\nTotal Marks for %s: %.2f\n", students[i].name, total_marks);
        printf("Average Marks for %s: %.2f\n", students[i].name, average_marks);

        // Check if this student has the highest total marks
        if (total_marks > highest_total) {
            highest_total = total_marks;
            highest_total_index = i;
        }
    }

    // Display the student with the highest total marks
    printf("\n--- Student with the Highest Total Marks ---\n");
    printf("Name: %s\n", students[highest_total_index].name);
    printf("Roll Number: %s\n", students[highest_total_index].roll_no);
    printf("Total Marks: %.2f\n", highest_total);

    // Display the student with the highest marks in a single subject
    printf("\n--- Student with the Highest Individual Mark ---\n");
    printf("Name: %s\n", students[highest_individual_marks_index].name);
    printf("Roll Number: %s\n", students[highest_individual_marks_index].roll_no);
    printf("Highest Mark: %.2f\n", highest_individual_marks);

    return 0;
}
