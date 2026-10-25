
#include <stdio.h>

int main()
{
    int marks[5];
    int total = 0;
    int choice;
    int pass = 1;
    float average;
    char grade;

    printf("\nSTUDENT MARKS MANAGEMENT SYSTEM\n");
    printf("1. Calculate Student Result\n");
    printf("2. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 2)
    {
        printf("Thank you for using the system!\n");
        return 0;
    }
    else if (choice != 1)
    {
        printf("Invalid choice!\n");
        return 0;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);

        total = total + marks[i];

        if (marks[i] < 35)
        {
            pass = 0;
        }
    }

    average = total / 5.0;

    if (average >= 90)
        grade = 'A';
    else if (average >= 75)
        grade = 'B';
    else if (average >= 60)
        grade = 'C';
    else if (average >= 35)
        grade = 'D';
    else
        grade = 'F';

    printf("\n----- STUDENT MARKS REPORT -----\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Subject %d: %d marks\n", i + 1, marks[i]);
    }

    printf("Total marks = %d\n", total);
    printf("Average marks = %.2f\n", average);
    printf("Grade = %c\n", grade);

    if (pass == 1)
        printf("Result: PASS\n");
    else
        printf("Result: FAIL\n");

    return 0;
}
