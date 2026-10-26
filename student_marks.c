
#include <stdio.h>

int main()
{
    int marks[5];
    char name[50];
    int rollNo;
    int total;
    int choice;
    int pass;
    float average;
    char grade;

    do
    {
        printf("\nSTUDENT MARKS MANAGEMENT SYSTEM\n");
        printf("1. Calculate Student Result\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            total = 0;
            pass = 1;

            printf("Enter student name: ");
            scanf(" %49[^\n]", name);

            printf("Enter roll number: ");
            scanf("%d", &rollNo);

            for (int i = 0; i < 5; i++)
            {
                printf("Enter marks for subject %d (0-100): ",
                       i + 1);
                scanf("%d", &marks[i]);

                while (marks[i] < 0 || marks[i] > 100)
                {
                    printf("Invalid marks! Enter again: ");
                    scanf("%d", &marks[i]);
                }

                total += marks[i];

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
            printf("Student Name: %s\n", name);
            printf("Roll Number: %d\n", rollNo);

            for (int i = 0; i < 5; i++)
            {
                printf("Subject %d: %d marks\n",
                       i + 1, marks[i]);
            }

            printf("Total marks = %d\n", total);
            printf("Average marks = %.2f\n", average);
            printf("Grade = %c\n", grade);

            if (pass == 1)
                printf("Result: PASS\n");
            else
                printf("Result: FAIL\n");
        }
        else if (choice == 2)
        {
            printf("Thank you for using the system!\n");
        }
        else
        {
            printf("Invalid choice!\n");
        }

    } while (choice != 2);

    return 0;
}

