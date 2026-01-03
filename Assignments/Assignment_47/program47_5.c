// Count prime numbers
/*
int CountPrime(PNODE Head);
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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
// Function name    :   CountPrime
// Description      :   Used to count prime elements(numbers) in the Linked List
// Parameters       :   First Pointer
// Return Value     :   int
//
////////////////////////////////////////////////////////////////////////////////////////////////

int CountPrime(PNODE first)
{
    int iNo = 0, iCount = 0;
    int iCnt = 0;
    bool bFlag = false;

    while(first != NULL)
    {
        iNo = first -> data;

        for(iCnt = 2, bFlag = true; iCnt < iNo / 2; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                bFlag = false;
                break;
            }
        }
        if(bFlag == true)
        {
            iCount++;
        }
        first = first -> next;
    }

    return iCount;
}

int main()
{
    PNODE head = NULL;

    int iRet = 0;

    InsertLast(&head, 11);
    InsertLast(&head, 21);
    InsertLast(&head, 53);
    InsertLast(&head, 111);
    InsertLast(&head, 113);
    InsertLast(&head, 127);

    Display(head);

    iRet = Count(head);
    printf("Number of nodes are : %d\n", iRet);

    iRet = CountPrime(head);

    printf("Count of prime elements is : %d\n", iRet);

    return 0;
}