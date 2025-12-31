// Doubly Linear Linked List 

#include <stdio.h>
#include <stdlib.h>

struct node                                         // Structure Defination
{
    int data;
    struct node *next;
    struct node *prev;
};

/*----------------------------------------------------------------------------------------------
        Old Name                        New Name
----------------------------------------------------------------------------------------------
        struct node                     NODE
        struct node *                   PNODE
        struct node **                  PPNODE
----------------------------------------------------------------------------------------------*/

typedef struct node NODE;                           // Aliasing Structure variables
typedef struct node *PNODE;
typedef struct node **PPNODE;

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name    :   InsertFirst
// Description      :   Used to insert at first position of Linked List
// Parameters       :   Address of First pointer & data of node
// Return Value     :   void
//
////////////////////////////////////////////////////////////////////////////////////////////////

void InsertFirst(PPNODE first, int iNo)             // Function Defination
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = iNo;
    newn -> next = NULL;
    newn -> prev = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn -> next = *first;
        (*first) -> prev = newn;
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

void InsertLast(PPNODE first, int iNo)              // Function Defination
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = iNo;
    newn -> next = NULL;
    newn -> prev = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;

        while(temp -> next != NULL) // Type 2
        {
            temp = temp -> next;
        }

        temp -> next = newn;
        newn -> prev = temp;
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

void DeleteFirst(PPNODE first)                      // Function Defination
{
    PNODE temp = NULL;

    if(*first == NULL)
    {
        return;
    }
    else if((*first) -> next == NULL)
    {
        free(*first);
    }
    else
    {
        temp = *first;

        *first = (*first) -> next;
        (*first) -> prev = NULL;
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

void DeleteLast(PPNODE first)                       // Function Defination
{
    PNODE temp = NULL;

    if(*first == NULL)
    {
        return;
    }
    else if((*first) -> next == NULL)
    {
        free(*first);
    }
    else
    {
        temp = *first;

        while((temp -> next)-> next != NULL)
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

void Display(PNODE first)                           // Function Defination
{
    printf("\nNULL <=> ");
    while(first != NULL)
    {
        printf("|%d| <=> ", first -> data);
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

int Count(PNODE first)                              // Function Defination
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

void InsertAtPos(PPNODE first, int iNo, int pos)    // Function Defination
{
    int iSize = 0;
    int iCnt = 0;

    iSize = Count(*first);
    
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    if(pos < 1 || pos > iSize + 1)
    {
        printf("Invalid Position\n");
        return;
    }

    if(pos == 1)
    {
        InsertFirst(first, iNo);
    }
    else if(pos == iSize + 1)
    {
        InsertLast(first, iNo);
    }
    else
    {
        temp = *first;

        newn -> data = iNo;
        newn -> next = NULL;
        newn -> prev = NULL;

        for(iCnt = 1; iCnt < pos - 1; iCnt++)
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next;
        temp -> next -> prev = newn;
        temp -> next = newn;
        newn -> prev = temp;
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

void DeleteAtPos(PPNODE first, int pos)             // Function Defination
{
    int iSize = 0;
    int iCnt = 0;

    PNODE temp = NULL;
    PNODE target = NULL;

    iSize = Count(*first);

    if(pos < 1 || pos > iSize)
    {
        printf("Invalid Position\n");
        return;
    }

    if(pos == 1)
    {
        DeleteFirst(first);
    }
    else if(pos == iSize)
    {
        DeleteLast(first);
    }
    else
    {
        temp = *first;

        for(iCnt = 1; iCnt < pos - 1; iCnt++)
        {
            temp = temp -> next;
        }

        target = temp -> next;

        temp -> next = target -> next;
        target -> next -> prev = temp;
        free(target);
    }
}

int main()                                          // Main Method
{
    PNODE head = NULL;                              // Pointer to structure
    int iRet = 0;

    InsertFirst(&head, 51);                         // Function call to InsertFirst
    InsertFirst(&head, 21);
    InsertFirst(&head, 11);

    Display(head);                                  // Display Function call
    iRet = Count(head);                             // Count Function call

    printf("Number of Nodes : %d\n", iRet);         // Display Count

    InsertLast(&head, 101);                         // Function call to InsertLast
    InsertLast(&head, 111);
    InsertLast(&head, 121);

    Display(head);                                  // Display Function call
    iRet = Count(head);                             // Count Function call

    printf("Number of Nodes : %d\n", iRet);         // Display Count

    InsertAtPos(&head, 105, 4);                     // FUnction call to InsertFirst

    Display(head);                                  // Display Function call
    iRet = Count(head);                             // Count Function call

    printf("Number of Nodes : %d\n", iRet);         // Display Count

    DeleteFirst(&head);                             // Function call to DeleteFirst

    Display(head);                                  // Display Function call
    iRet = Count(head);                             // Count Function call

    printf("Number of Nodes : %d\n", iRet);         // Display Count

    DeleteLast(&head);                              // Function call to DeleteLast

    Display(head);                                  // Display Function call
    iRet = Count(head);                             // Count Function call

    printf("Number of Nodes : %d\n", iRet);         // Display Count

    DeleteAtPos(&head, 3);                          // Function call to DeleteAtPos

    Display(head);                                  // Display Function call
    iRet = Count(head);                             // Count Function call

    printf("Number of Nodes : %d\n", iRet);         // Display Count

    return 0;
}