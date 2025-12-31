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

void InsertFirst(PPNODE first, int iNo)                         // Function defination
{
    PNODE newn = NULL;                                          // Pointer to node

    newn = (PNODE)malloc(sizeof(NODE));                         // Memory Allocation

    newn -> data = iNo;                                         // Assigning Values
    newn -> next = NULL;
    newn -> prev = NULL;

    // Business Logic
    
    if(*first == NULL)  // LL is empty
    {
        *first = newn;                                          // Assign new node to head
    }
    else
    {
        newn -> next = *first;                                  // attach LL to new node
        (*first) -> prev = newn;    // $
        *first = newn;
    }
}

void InsertLast(PPNODE first, int iNo)                          // Function defination
{
    PNODE newn = NULL;                                          // Pointer to node

    newn = (PNODE)malloc(sizeof(NODE));                         // Memory Allocation

    newn -> data = iNo;                                         // Assigning Values
    newn -> next = NULL;
    newn -> prev = NULL;

    if(*first == NULL)  // LL is Empty
    {
        *first = newn;
    }
    else
    {
        
    }
}

void InsertAtPos(PPNODE first, int iNo, int pos)                // Function defination
{

}

void DeleteFirst(PPNODE first)                                  // Function defination
{

}

void DeleteLast(PPNODE first)                                   // Function defination
{

}

void DeleteAtPos(PPNODE first, int pos)                         // Function defination
{

}

void Display(PNODE first)                                       // Function defination
{

}

int Count(PNODE first)                                          // Function defination
{

    return 0;
}

int main ()                                                     // Main Method
{
    PNODE head = NULL;


    return 0;
}