/* Write a C program to search for an element in an array using linear search.
   Take an array (say arr[]) and an integer (say key) as inputs.
   You need to print the index of the key if it is present in the array.
   Print -1 if the key is not present.
*/

#include <stdio.h>

int main()
{
    int n, key;
    printf("Enter n: ");
    scanf("%d", &n);

    int arr[200];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter key to search: ");
    scanf("%d", &key);

    int index = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            index = i;
            break;
        }
    }

    printf("%d\n", index);

    return 0;
}
