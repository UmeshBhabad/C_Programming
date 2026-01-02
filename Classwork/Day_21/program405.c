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

void InsertFirst(PPNODE first, PPNODE last, int iNo)            // Function Defination
{
    PNODE newn = NULL;                                          // Pointer to node

    newn = (PNODE)malloc(sizeof(NODE));                         // Memory allocation

    newn -> data = iNo;                                         // Assigning values
    newn -> next = NULL;

    if((*first == NULL) && (*last == NULL)) //@ // LL is empty
    {
        *first = newn;
        *last = newn;
    }
    else    // LL contains 1 or more nodes
    {
        (newn -> next) = *first;
        *first = newn;
    }
    (*last) -> next = *first;                                   // Maintaining Circular Nature
}

void InsertLast(PPNODE first, PPNODE last, int iNo)             // Function Defination
{
    PNODE newn = NULL;                                          // Pointer to node

    newn = (PNODE)malloc(sizeof(NODE));                         // Memory Allocation

    newn -> data = iNo;                                         // Assigning Values
    newn -> next = NULL;

    if((*first == NULL) && (*last == NULL)) // LL is empty
    {
        *first = newn;
        *last = newn;
        
    }
    else    // LL contains 1 or more nodes
    {

    }
    (*last) -> next = *first;                                   // Maintaining Circular nature
}

void InsertAtPos(PPNODE first, PPNODE last, int iNo, int Pos)   // Function defination
{
    
}

void DeleteFirst(PPNODE first, PPNODE last)
{

}

void DeleteLast(PPNODE first, PPNODE last)
{
    
}

void DeleteAtPos(PPNODE first, PPNODE last, int pos)
{
    
}

void Display(PNODE first, PNODE last)
{

}

int Count(PNODE first, PNODE last)
{
    
    return 0;
}

int main()
{
    PNODE head = NULL;
    PNODE tail = NULL;  // @


    InsertFirst(&head, &tail, 51);
    InsertFirst(&head, &tail, 21);
    InsertFirst(&head, &tail, 11);

    return 0;
}