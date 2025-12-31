#include <stdio.h>
#include <stdlib.h>

struct node                                                     // Structure Defination
{
    int data;
    struct node * next;
    struct node *prev;  // $
};

typedef struct node NODE;                                       // Aliasing Structure
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE first, int iNo)                         // Function Defination
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

void InsertLast(PPNODE first, int iNo)                          // Function Defination
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
        
    }
}

void InsertAtPos(PPNODE first, int iNo, int pos)                // Function Defination
{

}

void DeleteFirst(PPNODE first)                                  // Function Defination
{

}

void DeleteLast(PPNODE first)                                   // Function Defination
{

}

void DeleteAtPos(PPNODE first, int pos)                         // Function Defination
{

}

void Display(PNODE first)                                       // Function Defination
{
    printf("\nNULL");
    while(first != NULL)
    {
        printf("| %d |<=>", first -> data);
        first = first -> next;
    }
    printf("NULL\n");

}

int Count(PNODE first)                                          // Function Defination
{
    int iCount = 0;                                             // Local Variable

    while(first != NULL)                                        // Business Logic
    {
        iCount++;
        first = first -> next;
    }

    return iCount;
}

int main ()                                                     // Main method
{
    PNODE head = NULL;                                          // Pointer to node
    int iRet = 0;                                               // Local Variable

    InsertFirst(&head, 51);                                     // Function calls To InsertFirst
    InsertFirst(&head, 21);
    InsertFirst(&head, 11);

    Display(head);                                              // Display function call
    iRet = Count(head);                                         // Count Function call

    printf("Number of nodes : %d\n", iRet);                     // Displaying Count
    

    return 0;
}