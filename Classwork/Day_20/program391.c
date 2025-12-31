#include <stdio.h>
#include <stdlib.h>

struct node                                             // Structure Defination
{
    int data;
    struct node * next;
};

/*----------------------------------------------------------------------------------------------
        Old Name                        New Name
----------------------------------------------------------------------------------------------
        struct node                     NODE
        struct node *                   PNODE
        struct node **                  PPNODE
----------------------------------------------------------------------------------------------*/

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name    :   InsertFirst
// Description      :   Used to insert at first position of Linked List
// Parameters       :   Address of First pointer & data of node
// Return Value     :   void
//
////////////////////////////////////////////////////////////////////////////////////////////////

void InsertFirst(PPNODE first, int iNo)                 // Function defination
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

        newn -> next = temp;
        *first = newn;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name    :   InsertLast
// Description      :   Used to insert at last position of Linked List
// Parameters       :   Address of First pointer & data of node
// Return Value     :   void
//
////////////////////////////////////////////////////////////////////////////////////////////////

void InsertLast(PPNODE first, int iNo)                  // Function defination
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

        while((temp -> next) != NULL)
        {
            temp = temp -> next;
        }

        temp -> next = newn;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name    :   DeleteFirst
// Description      :   Used to delete at first position of Linked List
// Parameters       :   Address of First pointer, data of node & Position
// Return Value     :   void
//
////////////////////////////////////////////////////////////////////////////////////////////////

void DeleteFirst(PPNODE first)                          // Function defination
{
    PNODE temp = NULL;
    
    if(*first == NULL)
    {
        return;
    }
    else if((*first) -> next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        temp = *first;

        *first = (*first) -> next;

        free(temp);
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name    :   DeleteLast
// Description      :   Used to delete at Last position of Linked List
// Parameters       :   Address of First pointer
// Return Value     :   void
//
////////////////////////////////////////////////////////////////////////////////////////////////

void DeleteLast(PPNODE first)                           // Function defination
{
    PNODE temp = NULL;

    if((*first) == NULL)
    {
        return;
    }
    else if(((*first) -> next) == NULL)
    {
        free(*first);
        (*first) = NULL;
    }
    else
    {
        temp = (*first);

        while((temp -> next) -> next != NULL)
        {
            temp = temp -> next;
        }

        free(temp -> next);

        temp -> next = NULL;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name    :   Display
// Description      :   Used to display elements of Linked List
// Parameters       :   First Pointer
// Return Value     :   void
//
////////////////////////////////////////////////////////////////////////////////////////////////

void Display(PNODE first)                               // Function defination
{
    while(first != NULL)
    {
        printf("| %d |->",first -> data);
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

int Count(PNODE first)                                  // Function defination
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
// Function name    :   InsertAtPos
// Description      :   Used to Insert element at given position in the Linked List
// Parameters       :   First Pointer
// Return Value     :   void
//
////////////////////////////////////////////////////////////////////////////////////////////////

void InsertAtPos(PPNODE first, int iNo, int pos)        // Function defination
{
    int iSize = 0;

    iSize = Count(*first);

    if((pos < 1) || (pos > iSize + 1))  // Filter
    {
        printf("Invalid Position\n");
        return;
    }

    if(pos == 1)    // First position
    {
        InsertFirst(first, iNo);
    }
    else if(pos == iSize + 1)   // Last Position
    {
        InsertLast(first, iNo);
    }
    else
    {

    }


}

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name    :   DeleteAtPos
// Description      :   Used to Delete the element at given position in the Linked List
// Parameters       :   First Pointer
// Return Value     :   void
//
////////////////////////////////////////////////////////////////////////////////////////////////

void DeleteAtPos(PPNODE first, int iNo, int pos)        // Function defination
{
    int iSize = 0;

    iSize = Count(*first);

    if((pos < 1) || (pos > iSize))  // Filter
    {
        printf("Invalid Position\n");
        return;
    }

    if(pos == 1)    // First position
    {
        DeleteFirst(first);
    }
    else if(pos == iSize)   // Last Position
    {
        DeleteLast(first);
    }
    else
    {
        
    }
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head, 51);
    InsertFirst(&head, 21);
    InsertFirst(&head, 11);

    Display(head);

    iRet = Count(head);

    printf("Number of nodes are : %d\n", iRet);

    InsertLast(&head, 101);
    InsertLast(&head, 111);
    InsertLast(&head, 121);

    Display(head);

    iRet = Count(head);

    printf("Number of nodes are : %d\n", iRet);

    DeleteFirst(&head);

    Display(head);

    iRet = Count(head);

    printf("Number of nodes are : %d\n", iRet);

    DeleteLast(&head);

    Display(head);

    iRet = Count(head);

    printf("Number of nodes are : %d\n", iRet);

    InsertAtPos(&head, 105, 5);

    Display(head);

    iRet = Count(head);

    printf("Number of nodes are : %d\n", iRet);

    return 0;
}