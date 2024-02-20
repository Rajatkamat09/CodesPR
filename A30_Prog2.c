
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

int DisplayPrime(PNODE Head)
{
    int iNO = Head->data;
    int iPrime = 1;

    while (Head != NULL)
    {
        if ((((iNO) / iPrime) == iNO) && ((iNO )/ iNO) == iNO)
        {
            return iNO;      
        }
        Head = Head->next;
          
    }
    
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

    InsertFirst(&First, 11);
    InsertFirst(&First, 28);
    InsertFirst(&First, 17);
    InsertFirst(&First, 41);
    InsertFirst(&First, 6);
    InsertFirst(&First, 89);

    Display(First);

    iRet = DisplayPrime(First);
    printf("Prime numbers in the list are : %d",iRet);

    return 0;
}