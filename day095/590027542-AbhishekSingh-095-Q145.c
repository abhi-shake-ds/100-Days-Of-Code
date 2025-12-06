// Q145 (Structures)
// Return a structure containing top student's details from a function.

#include <stdio.h>

struct Student
{
    char name[100];
    int roll_no;
    float marks;
};

struct Student getTopStudent(struct Student s[], int n)
{
    int top = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i].marks > s[top].marks)
        {
            top = i;
        }
    }
    return s[top]; // returning entire struct
}

int main()
{
    struct Student s[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    struct Student topper = getTopStudent(s, 5);

    printf("Top Student: %s %d %.2f",
           topper.name,
           topper.roll_no,
           topper.marks);

    return 0;
}
