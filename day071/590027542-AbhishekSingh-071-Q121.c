// Q121 (File Handling)
// Create a file info.txt, take user's name and age, write using fprintf().

#include <stdio.h>

int main()
{
    char name[100];
    int age;

    FILE *fp = fopen("info.txt", "w");
    if (fp == NULL)
        return 0;

    fgets(name, sizeof(name), stdin);
    scanf("%d", &age);

    fprintf(fp, "Name: %sAge: %d\n", name, age);

    fclose(fp);

    printf("Data successfully saved");
    return 0;
}
