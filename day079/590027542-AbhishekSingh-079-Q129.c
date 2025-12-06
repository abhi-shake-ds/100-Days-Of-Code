// Q129 (File Handling)
// Read integers from numbers.txt, compute sum and average.

#include <stdio.h>

int main()
{
    FILE *fp;
    int num, count = 0;
    long long sum = 0;

    fp = fopen("numbers.txt", "r");
    if (fp == NULL)
    {
        printf("File not found");
        return 0;
    }

    while (fscanf(fp, "%d", &num) == 1)
    {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0)
    {
        printf("No numbers found");
        return 0;
    }

    double avg = (double)sum / count;

    printf("Sum: %lld\n", sum);
    printf("Average: %.2f\n", avg);

    return 0;
}
