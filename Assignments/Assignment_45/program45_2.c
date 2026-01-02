// First Occurance Position
/*
Return position of first occurance.

int FirstOccur(PNODE Head, int iNo);
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
// Function name    :   FirstOccur
// Description      :   returns the position of first occurance of element in the LL
// Parameters       :   First Pointer
// Return Value     :   int
//
////////////////////////////////////////////////////////////////////////////////////////////////

int FirstOccur(PNODE first, int iNo)
{
    int iPos = 0, iCount = 0;

    while(first != NULL)
    {
        iCount++;

        if((first -> data) == iNo)
        {
            iPos = iCount;
            break;
        }
        
        first = first -> next;
    }

    return iPos;

}

int main()
{
    PNODE head = NULL;

    int iRet = 0;
    int iValue = 0;

    InsertLast(&head, 11);
    InsertLast(&head, 21);
    InsertLast(&head, 51);
    InsertLast(&head, 101);
    InsertLast(&head, 110);
    InsertLast(&head, 21);
    InsertLast(&head, 140);

    Display(head);

    iRet = Count(head);
    printf("Number of nodes are : %d\n", iRet);

    printf("Enter the value : \n");
    scanf("%d", &iValue);

    iRet = FirstOccur(head, iValue);
    printf("Index of first occurance of %d is : %d\n", iValue, iRet);

    return 0;
}