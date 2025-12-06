// Q140 (Enum)
// Define a struct with enum Gender and print person's gender.

#include <stdio.h>

enum Gender
{
    MALE,
    FEMALE,
    OTHER
};

struct Person
{
    char name[100];
    enum Gender gender;
};

int main()
{
    struct Person p;
    int g;

    scanf("%s", p.name);
    scanf("%d", &g);

    p.gender = g;

    printf("Name: %s, Gender: ", p.name);

    if (p.gender == MALE)
        printf("Male");
    else if (p.gender == FEMALE)
        printf("Female");
    else if (p.gender == OTHER)
        printf("Other");
    else
        printf("Invalid");

    return 0;
}
