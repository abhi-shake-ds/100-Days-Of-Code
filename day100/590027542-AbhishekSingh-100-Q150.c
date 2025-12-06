// Q150 (Structures + Pointer + -> Operator)
// Use pointer to struct to modify and display data.

#include <stdio.h>

struct Employee
{
    char name[100];
    int id;
    float salary;
};

int main()
{
    struct Employee e;
    struct Employee *ptr = &e; // pointer to struct

    scanf("%s %d %f", ptr->name, &(ptr->id), &(ptr->salary));

    printf("Name: %s\n", ptr->name);
    printf("ID: %d\n", ptr->id);
    printf("Salary: %.2f\n", ptr->salary);

    return 0;
}
