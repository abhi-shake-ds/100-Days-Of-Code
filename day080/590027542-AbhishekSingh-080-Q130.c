// Q130 (File Handling)
// Store multiple student records in a file using fprintf()
// Then read and display them using fscanf()

#include <stdio.h>

struct Student
{
    char name[100];
    int roll;
    float marks;
};

int main()
{
    struct Student s[100];
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    FILE *fp = fopen("students.txt", "w");
    if (fp == NULL)
    {
        printf("Error creating file");
        return 0;
    }

    // Input students and write to file
    for (int i = 0; i < n; i++)
    {
        printf("Enter name, roll, marks for student %d:\n", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
        fprintf(fp, "%s %d %.2f\n", s[i].name, s[i].roll, s[i].marks);
    }

    fclose(fp);

    // Reading and displaying stored data
    fp = fopen("students.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file");
        return 0;
    }

    printf("\nStored Student Details:\n");

    // Read until EOF
    while (fscanf(fp, "%s %d %f", s[0].name, &s[0].roll, &s[0].marks) == 3)
    {
        printf("Name: %s | Roll: %d | Marks: %.2f\n",
               s[0].name, s[0].roll, s[0].marks);
    }

    fclose(fp);
    return 0;
}
