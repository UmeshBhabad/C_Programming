// Write a program which display all elements which are prime from singly linear linked list.

/*
    Input   :   |11|->|20|->|17|->|41|->|22|->|89|

    Output  :   11  17  41  89

*/

#include <stdio.h>
#include <stdlib.h>

#pragma pack(1)

struct node                                                 // Structure defination
{
    int data;
    struct node *next;
};

typedef struct node NODE;                                   // Aliasing Structure
typedef struct node * PNODE;
typedef struct node ** PPNODE;

/*----------------------------------------------------------------------------------------------
        Old Name                        New Name
----------------------------------------------------------------------------------------------
        struct node                     NODE
        struct node *                   PNODE
        struct node **                  PPNODE
----------------------------------------------------------------------------------------------*/

////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name    :   InsertFirst
// Description      :   Used to insert at first position of Linked List
// Parameters       :   Address of First pointer & data of node
// Return Value     :   void
//
////////////////////////////////////////////////////////////////////////////////////////////////

void InsertFirst(PPNODE first, int No)                      // Function defination
{
    PNODE newn = NULL;                                      // Pointer to node

    newn = (PNODE)malloc(sizeof(NODE));                     // Allocate memory
    
    newn -> data = No;                                      // Assign value to data
    newn -> next = NULL;                                    // Assign next to null

    if((*first) == NULL)  // Linkedlist is Empty
    {
        (*first) = newn;                                    // provide new node address to head
    }
    else        // Linkedlist contains atleast one node
    {
        newn -> next = *first;                              // assign previous node address to next of new node

        (*first) = newn;                                    // provide new node address to head
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

void InsertLast(PPNODE first, int No)                       // Function defination
{
    PNODE newn = NULL;                                      // Pointer to node
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));                     // Allocate memory
    
    newn -> data = No;                                      // Initialize data
    newn -> next = NULL;                                    // Initialize next

    if((*first) == NULL)  // LL is Empty
    {
        (*first) = newn;                                    // provide new node address to head
    }
    else        // LL contains atleast one node
    {
        temp = *first;                                      // Initialize temp for traversal

        while((temp -> next) != NULL)                       // till next is not null
        {
            temp = temp -> next;                            // update temp
        }

        temp -> next = newn;                                // provide new node address to next of temp
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

void Display(PNODE first)                                   // Function defination
{
    // Business Logic
    while(first != NULL)                                    // till first is not null
    {
        printf("| %d |-->", first->data);                   // Display data
        first = first -> next;                              // Update first
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

int Count(PNODE first)                                      // Function defination
{
    int iCount = 0;                                         // Local Variable

    while(first != NULL)                                    // till first is not null
    {
        iCount++;                                           // Update Count
        first = first -> next;                              // Update first
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

void DeleteFirst(PPNODE first)                              // Function defination
{
    PNODE temp = NULL;                                      // pointer to node

    // Business Logic
    if((*first) == NULL)    // if LL is empty
    {
        return;                                             // No node to delete
    }
    else if(((*first) -> next) == NULL)     // if LL contains only one node
    {
        free(*first);                                       // Deallocate memory
        (*first) = NULL;                                    // set head to null
    }
    else    // LL contains more than 1 node
    {
        temp = (*first);                                    // provide head address to temperory variable
        (*first) = (*first) -> next;                        // Update head
        free(temp);                                         // Deallocate the memory
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

void DeleteLast(PPNODE first)                               // Function defination
{
    PNODE temp = NULL;                                      // pointer to null

    if((*first) == NULL)    // if LL is empty
    {
        return;                                             // no node to delete
    }
    else if(((*first) -> next) == NULL)     // if LL contains 1 node
    {
        free(*first);                                       // Deallocate memory
        (*first) = NULL;                                    // set head to null
    }
    else    // LL contains more than 1 nodes
    {
        temp = (*first);                                    // Initialize temp for traversal

        while((temp -> next) -> next != NULL)               // till next of next of temp is not null
        {
            temp = temp -> next;                            // Update temp
        }

        free(temp -> next);                                 // Deallocate memory

        temp -> next = NULL;                                // set next of last node to null
    }
}

void DisplayPrime(PNODE first)
{
    int iCnt = 0, iNo = 0, iFreq = 0;

    while(first != NULL)
    {
        iNo = first -> data;

        iFreq = 0;

        for(iCnt = 2; iCnt <= iNo/2; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iFreq++;
                break;
            }
        }

        if(iFreq < 1)
        {
            printf("%d\t", iNo);
        }

        first = first -> next;
    }
    printf("\n");
}

int main()                                                  // Main Method
{
    PNODE head = NULL;                                      // Pointer to Linked List
    int iRet = 0, iRes = 0;                                           // Local Variable

    InsertLast(&head, 11);
    InsertLast(&head, 28);
    InsertLast(&head, 17);
    InsertLast(&head, 41);
    InsertLast(&head, 6);
    InsertLast(&head, 89);

    Display(head);

    iRet = Count(head);

    printf("Count : %d\n", iRet);

    DisplayPrime(head);

    return 0;
}