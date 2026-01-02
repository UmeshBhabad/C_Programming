// Doubly Linear Linked List

#include <stdio.h>
#include <stdlib.h>

struct node                                                         // Sturcture Defination
{
    int data;
    struct node * next;
    struct node *prev;  // $
};

typedef struct node NODE;                                           // Aliasing Structure
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE first, int iNo)                             // Function defination
{
    PNODE newn = NULL;                                              // Pointer to node

    newn = (PNODE)malloc(sizeof(NODE));                             // Memory Allocation

    newn -> data = iNo;                                             // Assigning Values
    newn -> next = NULL;
    newn -> prev = NULL;

    // Bsuiness  Logic

    if(*first == NULL)  // LL is Empty
    {
        *first = newn;                                              // new node address to head
    }
    else    // LL contains More than 1 Element
    {
        newn -> next = *first;                                      // Attach new node to LL
        (*first) -> prev = newn;    // $                            // Set previous pointer
        *first = newn;                                              // Set head to new LL
    }
}

void InsertLast(PPNODE first, int iNo)                              // Function defination
{
    PNODE newn = NULL;                                              // Pointer to node
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));                             // Memory allocation

    newn -> data = iNo;                                             // Assigning values
    newn -> next = NULL;
    newn -> prev = NULL;

    if(*first == NULL)  // LL is empty
    {
        *first = newn;
    }
    else    // LL contains more than 1 node
    {
        temp = *first;                                              // Xerox copy

        while((temp -> next) != NULL)   // Type 2                   // Traversal
        {
            temp = temp -> next;
        }

        temp -> next = newn;                                        // add new node to LL
        newn -> prev = temp;    // $    // temp->next->prev         // attach new node to LL

    }
}

void DeleteFirst(PPNODE first)                                      // Function defination
{
    PNODE temp = NULL;                                              // Xerox Copy
    
    // Business Logic

    if(*first == NULL)  // LL is empty
    {
        return;                                                     // no node to delete
    }
    else if((*first) -> next == NULL)   // LL contains atleast 1 node
    {
        free(*first);                                               // Deallocate memory
        *first = NULL;                                              // Set head to null
    }
    else    // LL contains More than one node
    {
        temp = *first;                                              // Xerox Copy

        *first = (*first) -> next;
        free(temp);                                                 // Deallocate the allocated memory
        (*first) -> prev = NULL;
    }
}

void DeleteLast(PPNODE first)                                       // Function defination
{
    PNODE temp = NULL;                                              // Pointer to node
    
    if(*first == NULL)  // LL is empty
    {
        return;                                                     // No node to delete
    }
    else if((*first) -> next == NULL)   // L contains 1 node
    {
        free(*first);                                               // Deallocate the memory
        *first = NULL;                                              // Set head to null
    }
    else    // LL contains more than 1 node
    {
        temp = *first;                                              // xerox copy

        while((temp -> next)-> next != NULL)    // Type 3           // Traversal
        {
            temp = temp -> next;
        }

        free(temp -> next);                                         // deallocate the memory
        temp -> next = NULL;                                        // next of last node to null
    }
}

void Display(PNODE first)                                           // Function defination
{
    printf("\nNULL");                                               // Business Logic
    while(first != NULL)
    {
        printf("| %d |<=>", first -> data);
        first = first -> next;
    }
    printf("NULL\n");

}

int Count(PNODE first)                                              // Function defination
{
    int iCount = 0;                                                 // Local Variable

    while(first != NULL)                                            // Business Logic
    {
        iCount++;
        first = first -> next;
    }

    return iCount;
}

void InsertAtPos(PPNODE first, int iNo, int pos)                    // Function Defination
{
    int iSize = 0;                                                  // Local Variables
    int iCnt = 0;

    PNODE newn = NULL;                                              // Pointers to ndoe
    PNODE temp = NULL;

    iSize = Count(*first);                                          // Count Function call

    if(pos < 1 || pos > iSize + 1)                                  // Filter
    {
        printf("Invalid Position\n");
        return;
    }

    if(pos == 1)                                                    // Node at first position
    {
        InsertFirst(first, iNo);                                    //Function call to InsertFirst
    }
    else if (pos == iSize + 1)                                      // Node at last position
    {
        InsertLast(first, iNo);                                     // Function call to InsertLast
    }
    else                                                            // Node at given position
    {
        newn = (PNODE)malloc(sizeof(NODE));                         // Memory Allocation

        newn -> data = iNo;                                         // Assigning Values
        newn -> next = NULL;
        newn -> prev = NULL;

        temp = *first;                                              // Xerox Copy

        for(iCnt = 1; iCnt < pos - 1; iCnt++)                       // Traversal
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next;    // 1
        temp -> next -> prev = newn;    // 2    // $
        temp -> next = newn;    // 3
        newn -> prev = temp;    // 4    // $
        
    }
}

void DeleteAtPos(PPNODE first, int pos)                             // Function defination
{
    int iSize = 0;                                                  // Local Variable
    int iCnt = 0;

    PNODE temp = NULL;                                              // Pointer to node

    iSize = Count(*first);                                          // Count Function call

    if(pos < 1 || pos > iSize)                                      // Filter
    {
        printf("Invalid Position\n");
        return;
    }

    if(pos == 1)                                                    // Node at first psition
    {
        DeleteFirst(first);                                         // Delete At first position
    }
    else if (pos == iSize)                                          // Node at last position
    {
        DeleteLast(first);                                          // Delete at last position
    }
    else                                                            // Node at given position
    {
        temp = *first;                                              // Xerox copy

        for(iCnt = 1; iCnt < pos - 1; iCnt++)                       // Traversal
        {
            temp = temp -> next;
        }        
    }
}

int main ()                                                         // Main method
{
    PNODE head = NULL;                                              // Pointer to node
    int iRet = 0;                                                   // Local Variable

    InsertFirst(&head, 51);                                         // Function call to InsertFirst
    InsertFirst(&head, 21);
    InsertFirst(&head, 11);

    Display(head);                                                  // Display function call
    iRet = Count(head);                                             // Count function call

    printf("Number of nodes : %d\n", iRet);                         // Displaying Count

    InsertLast(&head, 101);                                         // Function call
    InsertLast(&head, 111);
    InsertLast(&head, 121);

    Display(head);                                                  // Display function call
    iRet = Count(head);                                             // Count function call

    printf("Number of nodes : %d\n", iRet);                         // Displaying Count

    DeleteFirst(&head);                                             // Function call

    Display(head);                                                  // Display function call
    iRet = Count(head);                                             // Count function call

    printf("Number of nodes : %d\n", iRet);                         // Displaying Count

    DeleteLast(&head);                                              // Function call

    Display(head);                                                  // Display function call
    iRet = Count(head);                                             // Count function call

    printf("Number of nodes : %d\n", iRet);                         // Displaying Count
    
    InsertAtPos(&head, 105, 3);                                     // Function call

    Display(head);                                                  // Display function call
    iRet = Count(head);                                             // Count function call

    printf("Number of nodes : %d\n", iRet);                         // Displaying Count;

    return 0;
}