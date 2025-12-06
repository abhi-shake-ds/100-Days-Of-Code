// Q146 (Structures)
// Create Employee struct with nested Date struct and print details.

#include <stdio.h>

struct Date
{
    int day, month, year;
};

struct Employee
{
    char name[100];
    int id;
    float salary;
    struct Date doj; // nested structure
};

int main()
{
    struct Employee e;

    scanf("%s %d %f %d %d %d",
          e.name, &e.id, &e.salary,
          &e.doj.day, &e.doj.month, &e.doj.year);

    printf("Name: %s\n", e.name);
    printf("ID: %d\n", e.id);
    printf("Salary: %.2f\n", e.salary);
    printf("Date of Joining: %02d-%02d-%04d",
           e.doj.day, e.doj.month, e.doj.year);

    return 0;
}
