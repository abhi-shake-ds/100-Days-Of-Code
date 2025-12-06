// Q147 (File Handling + Structures)
// Store employee data in a binary file using fwrite()
// Read it back using fread()

#include <stdio.h>

struct Employee
{
    char name[100];
    int id;
    float salary;
};

int main()
{
    struct Employee e, e_read;

    FILE *fp = fopen("employee.dat", "wb");
    if (fp == NULL)
    {
        printf("File Error");
        return 0;
    }

    scanf("%s %d %f", e.name, &e.id, &e.salary);

    fwrite(&e, sizeof(struct Employee), 1, fp);
    fclose(fp);

    fp = fopen("employee.dat", "rb");
    if (fp == NULL)
    {
        printf("File Error");
        return 0;
    }

    fread(&e_read, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("Name: %s\n", e_read.name);
    printf("ID: %d\n", e_read.id);
    printf("Salary: %.2f\n", e_read.salary);

    return 0;
}
