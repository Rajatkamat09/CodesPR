#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Node structure for singly linked list
struct Node
{
    int data;
    struct Node *next;
};

// Function to find the smallest element in the linked list
int findSmallestElement(struct Node *head)
{
    int smallest = INT_MAX; // Initialize to the largest possible integer value
    struct Node *current = head;

    // Traverse the linked list
    while (current != NULL)
    {
        // Update the smallest value if the current node's data is smaller
        if (current->data < smallest)
        {
            smallest = current->data;
        }

        // Move to the next node
        current = current->next;
    }

    return smallest;
}

// Function to insert a new node at the end of the linked list
void insertAtEnd(struct Node **head, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        struct Node *temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to print the linked list
void displayList(struct Node *head)
{
    struct Node *current = head;
    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main()
{
    struct Node *head = NULL;

    // Insert elements into the linked list
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 5);
    insertAtEnd(&head, 30);
    insertAtEnd(&head, 40);
    insertAtEnd(&head, 20);

    // Display the linked list
    printf("Linked List: ");
    displayList(head);

    // Find the smallest element in the linked list
    int smallest = findSmallestElement(head);

    // Display the result
    printf("The smallest element in the linked list is: %d\n", smallest);

    return 0;