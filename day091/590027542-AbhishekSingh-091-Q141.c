// Q141 (Enum / Structures)
// Define a structure Student and read + print one student's data.

#include <stdio.h>

struct Student
{
    char name[100];
    int roll_no;
    float marks;
};

int main()
{
    struct Student s;

    scanf("%s", s.name);
    scanf("%d %f", &s.roll_no, &s.marks);

    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
