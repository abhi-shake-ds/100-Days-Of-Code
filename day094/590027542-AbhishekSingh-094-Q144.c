// Q144 (Structures)
// Write a function that accepts a structure as parameter and prints its members.

#include <stdio.h>

struct Student
{
    char name[100];
    int roll_no;
    float marks;
};

void printStudent(struct Student st)
{
    printf("Name: %s\n", st.name);
    printf("Roll No: %d\n", st.roll_no);
    printf("Marks: %.2f\n", st.marks);
}

int main()
{
    struct Student s;

    scanf("%s %d %f", s.name, &s.roll_no, &s.marks);

    printStudent(s);

    return 0;
}
