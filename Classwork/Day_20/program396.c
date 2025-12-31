#include <stdio.h>
#include <stdlib.h>

struct node                                                 // Structure defination
{
    int data;
    struct node * next;
    struct node *prev;  // $
};

typedef struct node NODE;                                   // Aliasing Structure
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE first, int iNo)                     // Function defination
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = iNo;
    newn -> next = NULL;
    newn -> prev = NULL;    // $

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

void InsertLast(PPNODE first, int iNo)                      // Function defination
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

void InsertAtPos(PPNODE first, int iNo, int pos)            // Function defination
{

}

void DeleteFirst(PPNODE first)                              // Function defination
{

}

void DeleteLast(PPNODE first)                               // Function defination
{

}

void DeleteAtPos(PPNODE first, int pos)                     // Function defination
{

}

void Display(PNODE first)                                   // Function defination
{
    printf("\nNULL");
    while(first != NULL)                                    // Business Logic
    {
        printf("| %d |<=>", first -> data);
        first = first -> next;
    }
    printf("NULL\n");

}

int Count(PNODE first)                                      // Function defination
{

    return 0;
}

int main ()                                                 // Main method
{
    PNODE head = NULL;                                      // pointer to the node

    InsertFirst(&head, 51);                                 // Function calls to InsertFirst
    InsertFirst(&head, 21);
    InsertFirst(&head, 11);

    Display(head);                                          // Display function call

    return 0;
}