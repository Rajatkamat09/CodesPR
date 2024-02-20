

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newN = (PNODE)malloc(sizeof(NODE));

    newN->data = No;
    newN->next = NULL;

    if (*Head == NULL) // LL is empty.
    {
        *Head = newN;
    }
    else // LL has something.
    {
        newN->next = *Head;
        *Head = newN;
    }
}

int SearchLastOcc(PNODE Head, int No)
{
    int iPos = -1;
    int iCrnt = 0;

    while (Head != NULL)
    {
        if (Head->data  == No)
        {
            iPos = iCrnt;
        }
        Head = Head->next;
        iCrnt++;
    }
    return iPos;
     
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

int Count(PNODE Head)
{
    int iCnt = 0;
    while (Head != NULL)
    {
        iCnt++;
        Head = Head->next;
    }
    return iCnt;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;
    int iValue= 0;

    
    InsertFirst(&First, 70);
    InsertFirst(&First, 30);
    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    Display(First);
    

    printf("Enter the Element : ");
    scanf("%d",&iValue);


    iRet = SearchLastOcc(First, 30);
    printf("The Last Occrrance of the Element is at   : %d\n",iRet);
    

    return 0;
}