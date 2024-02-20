
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}

void DisplayPalindrome(PNODE Head)
{
    while (Head != NULL)
    {
        if ((Head->data))
        {
            printf("%d ", Head->data);
        }
        Head = Head->next;
    }

    printf("\n");
}


void Display(PNODE Head)
{
    printf("Elements of the linked list are : \n");

    while (Head != NULL)
    {
        printf("| %d | -> ", Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 11);
    InsertFirst(&First, 20);
    InsertFirst(&First, 32);
    InsertFirst(&First, 41);

    Display(First);
    DisplayPalindrome(First);
    Display(First);

    return 0;
}