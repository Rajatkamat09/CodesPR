#include <stdio.h>

int findLastOccurrence(int arr[], int size, int no)
{
    int i;
    int lastIndex = -1; // Initialize the index to -1 (indicating not found) initially

    for (i = 0; i < size; i++)
    {
        if (arr[i] == no)
        {
            lastIndex = i; // Update the index of the last occurrence
        }
    }

    return lastIndex; // Returns the index of the last occurrence
}

int main()
{
    int N;
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int numbers[N];
    printf("Enter %d numbers:\n", N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &numbers[i]);
    }

    int noToFind;
    printf("Enter the number to find: ");
    scanf("%d", &noToFind);

    int index = findLastOccurrence(numbers, N, noToFind);
    if (index != -1)
    {
        printf("%d found at last occurrence index %d\n", noToFind, index);
    }
    else
    {
        printf("%d not found in the array\n", noToFind);
    }

    return 0;
}