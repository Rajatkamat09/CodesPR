
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

int SecMaximum(PNODE Head)
{
    int iMaxF = 0;
    int iMaxS = 0;

    if (Head-> data > Head->next->data)
    {
        iMaxF = Head->data;
        iMaxS = Head->next->data;
    }
    else
    {
        iMaxF = Head->next->data;
        iMaxS = Head->data;
    }
    Head = Head->next->next;

    while (Head != NULL)
    {
        if (Head->data > iMaxF)
        {
            iMaxS = iMaxF;
            iMaxF = Head->data;
        }
        else if ((Head->data > iMaxS) && (Head->data < iMaxF))
        {
            iMaxS = Head->data;
        }
        Head = Head->next;
    }

    return iMaxS;
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
    InsertFirst(&First, 320);
    InsertFirst(&First, 240);

    Display(First);

    iRet = SecMaximum(First);
    printf("Second Maximum  element is : %d\n", iRet);
    return 0;
}