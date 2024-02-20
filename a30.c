// Function to calculate the sum of digits of a number

int sumOfDigits(int num)
{
    int sum = 0;
    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

// Function to display the sum of digits for each element in the linked list
void displaySumOfDigits(struct Node *head)
{
    struct Node *current = head;

    printf("Sum of digits for each element in the linked list: ");
    while (current != NULL)
    {
        int digitSum = sumOfDigits(current->data);
        printf("%d ", digitSum);
        current = current->next;
    }
    printf("\n");
}
