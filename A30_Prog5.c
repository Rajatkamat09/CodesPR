
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

int SumDigit(PNODE Head)
{
    int iSum = 0;
    int iDig = 0;

    while (Head->data != 0)
    {
        iSum = iSum + (Head->data % 10);
        Head->data = Head->data / 10;
    }
    return iSum;

    while (Head != NULL)
    {
        iDig = iSum * (Head->data);
        printf("%d ", iDig);
        Head = Head->next;
    }
    return iDig;
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
    int iRet = 0;

    InsertFirst(&First, 110);
    InsertFirst(&First, 230);
    InsertFirst(&First, 20);
    InsertFirst(&First, 240);
    InsertFirst(&First, 640);

    Display(First);

    iRet = SumDigit(First);
    printf("Sum of digits of the elements are : | %d |->\n", iRet);
    return 0;
}