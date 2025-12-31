#include <stdio.h>
#include <stdlib.h>

struct node                                             // Structure Defination
{
    int data;
    struct node * next;
    struct node *prev;  // $
};

typedef struct node NODE;                               // Aliasing Structure
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE first, int iNo)                 // Function Defination
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
        (*first) -> prev = newn;    // $
        *first = newn;
    }
}

void InsertLast(PPNODE first, int iNo)                  // Function Defination
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

        while((temp -> next) != NULL)   // Type 2
        {
            temp = temp -> next;
        }

        temp -> next = newn;
        newn -> prev = temp;    // $    // temp->next->prev

    }
}

void InsertAtPos(PPNODE first, int iNo, int pos)        // Function Defination
{

}

void DeleteFirst(PPNODE first)                          // Function Defination
{
    PNODE temp = NULL;                                  // Pointer to Node
    
    // Business Logic

    if(*first == NULL)  // LL is Empty
    {
        return;                                         // No Node to delete
    }
    else if((*first) -> next == NULL)   // LL contain 1 element
    {
        free(*first);                                   // Deallocate memory
        *first = NULL;
    }
    else    // LL contains more than 1 element
    {
        temp = *first;                                  // Xerox copy

        *first = (*first) -> next;
        free(temp);                                     // Deallocate the memory
        (*first) -> prev = NULL;    // $
    }
}

void DeleteLast(PPNODE first)                           // Function Defination
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
        
    }
}

void DeleteAtPos(PPNODE first, int pos)                 // Function Defination
{

}

void Display(PNODE first)                               // Function Defination
{
    printf("\nNULL");
    while(first != NULL)
    {
        printf("| %d |<=>", first -> data);
        first = first -> next;
    }
    printf("NULL\n");

}

int Count(PNODE first)                                  // Function Defination
{
    int iCount = 0;

    while(first != NULL)
    {
        iCount++;
        first = first -> next;
    }

    return iCount;
}

int main ()                                             // Main Method
{
    PNODE head = NULL;                                  // Pointer to node
    int iRet = 0;                                       // Local Variable

    InsertFirst(&head, 51);                             // Function calls To InsertFirst
    InsertFirst(&head, 21);
    InsertFirst(&head, 11);

    Display(head);                                      // Display function call
    iRet = Count(head);                                 // Count Function call

    printf("Number of nodes : %d\n", iRet);             // Displaying Count

    InsertLast(&head, 101);                             // Function calls to InsertLast
    InsertLast(&head, 111);
    InsertLast(&head, 121);

    Display(head);                                      // Display function call
    iRet = Count(head);                                 // Count Function call

    printf("Number of nodes : %d\n", iRet);             // Displaying Count

    DeleteFirst(&head);                                 // Function call to DeleteFirst

    Display(head);                                      // Display function call
    iRet = Count(head);                                 // Count Function call

    printf("Number of nodes : %d\n", iRet);             // Displaying Count  

    return 0;
}