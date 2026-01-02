// Singly Circular Linked List

#include <stdio.h>
#include <stdlib.h>

struct node                                                     // Structure Defination
{
    int data;
    struct node *next;
};

typedef struct node NODE;                                       // Aliasing Structure
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE first, PPNODE last, int iNo)            // Function defination
{
    PNODE newn = NULL;                                          // Pointer to node

    newn = (PNODE)malloc(sizeof(NODE));                         // Memory allocation

    newn -> data = iNo;                                         // Assigning values
    newn -> next = NULL;

    // Business Logic

    if((*first == NULL) && (*last == NULL)) //@ // LL is empty
    {
        *first = newn;                                          // head and tail pointing to same node 
        *last = newn;
    }
    else    // LL contain 1 or more nodes
    {
        (newn -> next) = *first;                                // attach new node to LL
        *first = newn;
    }
    (*last) -> next = *first;   // @                            // Maintain Circular nature 
}

void InsertLast(PPNODE first, PPNODE last, int iNo)             // Function defination
{
    PNODE newn = NULL;                                          // pointer to node

    newn = (PNODE)malloc(sizeof(NODE));                         // Allocate Memory

    newn -> data = iNo;                                         // Assigning values
    newn -> next = NULL;

    // Business Logic

    if((*first == NULL) && (*last == NULL)) //@     // LL is Empty
    {
        *first = newn;                                          // head and tail pointing to same node
        *last = newn;   // @
    }
    else    // LL contains 1 or more nodes
    {
        (*last) -> next = newn; // @                            // Inserting node at the end
        *last = newn;   // @
    }
    (*last) -> next = *first;   // @                            // Maintaining Circular nature
}



void DeleteFirst(PPNODE first, PPNODE last)                     // Function defination
{
    PNODE temp = NULL;                                          // Pointer to node

    if(*first == NULL && *last == NULL) // case 1: LL is empty
    {
        return;                                                 // No node to delete
    }
    else if(*first == *last)    // case 2: LL contains 1 node
    {
        free(*first);                                           // Deallocate memory

        *first = NULL;                                          // set head and tail to null after deallocation
        *last = NULL;
    }
    else    // case 3: LL contains more than 1 node
    {
        temp = *first;

        *first = (*first) -> next;
        free(temp);                                             // Deallocate memory
        (*last) -> next = *first;                               // Maintaing Circular nature
    }
}

void DeleteLast(PPNODE first, PPNODE last)                      // Function defination
{
    PNODE temp = NULL;                                          // Pointer to node
    
    if(*first == NULL && *last == NULL) // case 1: LL is empty
    {
        return;                                                 // No node to delete
    }
    else if(*first == *last)    // case 2: LL contain 1 node
    {
        free(*first);                                           // Deallocate the memory
        *first = NULL;                                          // set head and tail to null
        *last = NULL;
    }
    else    // case 3: LL contains more than 1 element
    {
        temp = *first;                                          // Xerox copy

        while(temp -> next != (*last))
        {
            temp = temp -> next;                                // Traversal
        }

        free(*last);                                            // Deallocate the memory
        *last = temp;

        (*last) -> next = (*first);                             // Maintain circular nature
    }
}

void Display(PNODE first, PNODE last)                           // Function defination
{
    do                                                          // Business Logic
    {
        printf("|%d| ->", first -> data);
        first = first -> next;
    }while(first != last -> next);
    printf("\n");
}

int Count(PNODE first, PNODE last)                              // Function Defination
{
    int iCount = 0;                                             // Local Variable

    do                                                          // Business Logic
    {
        iCount++;
        first = first -> next;
    }while(first != last-> next);

    return iCount;
}

void InsertAtPos(PPNODE first, PPNODE last, int iNo, int pos)   // Function defination
{
    int iSize = 0;                                              // Local Variables
    int iCnt = 0;

    PNODE newn = NULL;                                          // Pointer to node
    PNODE temp = NULL;

    iSize = Count(*first, *last);                               // Count Function call

    if(pos < 1 || pos > iSize + 1)                              // Filter
    {
        printf("Invalid Position");
        return;
    }

    // Business Logic

    if(pos == 1)
    {
        InsertFirst(first, last, iNo);                          // Insert at first position
    }
    else if(pos == iSize + 1)                                   // Insert at last position
    {
        InsertLast(first, last, iNo);
    }
    else
    {
        temp = *first;                                          // Xerox Copy

        newn = (PNODE)malloc(sizeof(NODE));                     // Memory allocation
        
        newn -> data = iNo;                                     // Assigning values
        newn -> next = NULL;

        for(iCnt = 1; iCnt < pos -1; iCnt++)                    // Traversal
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next;
        temp -> next = newn;
    }
}

void DeleteAtPos(PPNODE first, PPNODE last, int pos)            // Function defination
{
    int iSize = 0;                                              // Local Variables
    int iCnt = 0;

    PNODE temp = NULL;                                          // Pointers to node
    PNODE target = NULL;

    iSize = Count(*first, *last);                               // Count Function call

    if(pos < 1 || pos > iSize)                                  // Filter
    {
        printf("Invalid Position");
        return;
    }

    if(pos == 1)    // Case 1: node at first position
    {
        DeleteFirst(first, last);                               // Delete at First position
    }
    else if(pos == iSize)   // Case 2: node at last position
    {
        DeleteLast(first, last);                                // Delete at Last Position
    }
    else    // Case 3: node at any position
    {
        
    }
}

int main()                                                      // Main Method
{
    PNODE head = NULL;                                          // Pointer to node
    PNODE tail = NULL;  // @                                    // Pointer to node
    
    int iRet = 0;                                               // Local Variable

    InsertFirst(&head, &tail, 51);                              // Function calls
    InsertFirst(&head, &tail, 21);
    InsertFirst(&head, &tail, 11);

    Display(head, tail);                                        // Display Function call

    iRet = Count(head, tail);                                   // Count Function call
    printf("Number of nodes : %d\n", iRet);                     // Display Count

    InsertLast(&head, &tail, 101);                              // Function calls
    InsertLast(&head, &tail, 111);
    InsertLast(&head, &tail, 121);

    Display(head, tail);                                        // Display Function call

    iRet = Count(head, tail);                                   // Count Function call
    printf("Number of nodes : %d\n", iRet);                     // Display Count

    DeleteFirst(&head, &tail);                                  // Function call

    Display(head, tail);                                        // Display Function call

    iRet = Count(head, tail);                                   // Count Function call
    printf("Number of nodes : %d\n", iRet);                     // Display Count

    DeleteLast(&head, &tail);                                   // Function call

    Display(head, tail);                                        // Display Function call

    iRet = Count(head, tail);                                   // Count Function call
    printf("Number of nodes : %d\n", iRet);                     // Display Count

    InsertAtPos(&head, &tail, 105, 3);                          // Function call

    Display(head, tail);                                        // Display Function call

    iRet = Count(head, tail);                                   // Count Function call
    printf("Number of nodes : %d\n", iRet);                     // Display Count

    return 0;
}