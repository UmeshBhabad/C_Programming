// Check whether All Elements are Positive
/*
bool CheckAllPositive(PNODE Head);
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
// Function name    :   CheckAllPositive
// Description      :   Used to check if all the elements are positive
// Parameters       :   First Pointer
// Return Value     :   bool
//
////////////////////////////////////////////////////////////////////////////////////////////////

bool CheckAllPositive(PNODE first)
{
    bool bFlag = false;
    
    while(first != NULL)
    {
        bFlag = true;

        if(first -> data < 0)
        {
            bFlag = false;
            break;
        }

        first = first -> next;
    }

    return bFlag;    
}

int main()
{
    PNODE head = NULL;

    int iRet = 0;
    bool bRet = false;

    InsertLast(&head, 11);
    InsertLast(&head, 21);
    InsertLast(&head, 51);
    InsertLast(&head, -101);
    InsertLast(&head, 111);
    InsertLast(&head, 121);

    Display(head);

    iRet = Count(head);
    printf("Number of nodes are : %d\n", iRet);

    bRet = CheckAllPositive(head);

    if(bRet == true)
    {
        printf("All elements in the LL are positive.\n");
    }
    else
    {
        printf("There are negative elements in Linked List\n");
    }

    return 0;
}