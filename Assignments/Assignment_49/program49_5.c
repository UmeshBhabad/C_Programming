// Count Two-Digit numbers
/*
int CountTwoDigits(PNODE Head);
*/

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

/*----------------------------------------------------------------------------------------------
        Old Name                        New Name
----------------------------------------------------------------------------------------------
        struct node                     NODE
        struct node *                   PNODE
        struct node **                  PPNODE
----------------------------------------------------------------------------------------------*/

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name    :   Display
// Description      :   Used to display elements of Linked List
// Parameters       :   First Pointer
// Return Value     :   void
//
////////////////////////////////////////////////////////////////////////////////////////////////

void Display(PNODE first)
{
    printf("\n");
    while(first != NULL)
    {
        printf("| %d | -> ", first -> data);
        first = first -> next;
    }
    printf("NULL\n");
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name    :   Count
// Description      :   Used to count elements of Linked List
// Parameters       :   First Pointer
// Return Value     :   int
//
////////////////////////////////////////////////////////////////////////////////////////////////

int Count(PNODE first)
{
    int iCount = 0;

    while(first != NULL)
    {
        iCount++;
        first = first -> next;
    }

    return iCount;
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name    :   InsertLast
// Description      :   Used to insert at last position of Linked List
// Parameters       :   Address of First pointer & data of node
// Return Value     :   void
//
////////////////////////////////////////////////////////////////////////////////////////////////

void InsertLast(PPNODE first, int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = iNo;
    newn -> next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;

        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }

        temp -> next = newn;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name    :   CountTwoDigit
// Description      :   Used to count Two-digit elements in the Linked List
// Parameters       :   First Pointer
// Return Value     :   int
//
////////////////////////////////////////////////////////////////////////////////////////////////

int CountTwoDigit(PNODE first)
{
    int iCount = 0, iRes = 0;
    int iNo = 0;
    int iDigit = 0;

    while(first != NULL)
    {
        iNo = first -> data;
        iCount = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iNo /= 10;
            iCount++;
        }

        if(iCount == 2)
        {
            iRes++;
        }
        
        first = first -> next;
    }

    return iRes;
}

int main()
{
    PNODE head = NULL;

    int iRet = 0;

    InsertLast(&head, 11);
    InsertLast(&head, 22);
    InsertLast(&head, 51);
    InsertLast(&head, 111);
    InsertLast(&head, 110);
    InsertLast(&head, 1201);
    InsertLast(&head, 13);

    Display(head);

    iRet = Count(head);
    printf("Number of nodes are : %d\n", iRet);

    iRet = CountTwoDigit(head);

    printf("Count of Two-Digit numbers is : %d\n", iRet);

    return 0;
}