// Q149 (Structures + Dynamic Memory)
// Use malloc() to allocate structure memory dynamically and print details.

#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char name[100];
    int roll_no;
    float marks;
};

int main()
{
    struct Student *s = (struct Student *)malloc(sizeof(struct Student));

    if (s == NULL)
    {
        printf("Memory Allocation Failed");
        return 0;
    }

    scanf("%s %d %f", s->name, &s->roll_no, &s->marks);

    printf("Name: %s\n", s->name);
    printf("Roll No: %d\n", s->roll_no);
    printf("Marks: %.2f\n", s->marks);

    free(s); // Clean up memory
    return 0;
}
