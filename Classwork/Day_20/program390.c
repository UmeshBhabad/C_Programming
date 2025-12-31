#include <stdio.h>
#include <stdlib.h>

struct node                                             // Structure Defination
{
    int data;
    struct node *next;
};

/*----------------------------------------------------------------------------------------------
        Old Name                        New Name
----------------------------------------------------------------------------------------------
        struct node                     NODE
        struct node *                   PNODE
        struct node **                  PPNODE
----------------------------------------------------------------------------------------------*/

typedef struct node NODE;                               // Aliasing Structure
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

void InsertFirst(PPNODE first, int No)                  // Function defination
{
    PNODE newn = NULL;                                  // Pointer to new node

    newn = (PNODE)malloc(sizeof(NODE));                 // Memory allocation
    
    newn -> data = No;                                  // Initializaing values
    newn -> next = NULL;

    if((*first) == NULL)  // LL is Empty
    {
        (*first) = newn;                                // Assign new node's address to head
    }
    else        // LL contains atleast one node
    {
        newn -> next = *first;                          // Connect LL to new node

        (*first) = newn;                                // Assign new node's address to head
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

void InsertLast(PPNODE first, int No)                   // Function defination
{
    PNODE newn = NULL;                                  // Pointers to the node
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));                 // Memory allocation
    
    newn -> data = No;                                  // Assigning values
    newn -> next = NULL;

    if((*first) == NULL)  // LL is Empty
    {
        (*first) = newn;
    }
    else        // LL contains atleast one node
    {
        temp = *first;                                  // Xerox Copy

        while((temp -> next) != NULL)                   // Traverse to the end
        {
            temp = temp -> next;
        }

        temp -> next = newn;                            // attach new node to the LL
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
    while(first != NULL)                                // Business Logic
    {
        printf("| %d |->", first -> data);
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
    int iCount = 0;                                     // Local Variable
    
    while(first != NULL)                                // Business Logic
    {
        iCount++;
        first = first -> next;
    }

    return iCount;
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
        (*first) = (*first) -> next;
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

void DeleteLast(PPNODE first)
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

int main()                                                  // Main Method
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head, 75);
    InsertFirst(&head, 51);
    InsertFirst(&head, 21);
    InsertFirst(&head, 11);

    Display(head);

    iRet = Count(head);

    printf("Number of Nodes are %d\n", iRet);

    InsertLast(&head, 101);
    InsertLast(&head, 111);
    InsertLast(&head, 121);

    Display(head);

    iRet = Count(head);

    printf("Number of Nodes are %d\n", iRet);

    DeleteFirst(&head);

    Display(head);

    iRet = Count(head);

    printf("Number of Nodes are %d\n", iRet);

    DeleteLast(&head);

    Display(head);

    iRet = Count(head);

    printf("Number of Nodes are %d\n", iRet);

    return 0;
}