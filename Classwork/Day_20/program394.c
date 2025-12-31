// Doubly Linear Liner List

#include <stdio.h>
#include <stdlib.h>

struct node                                                         // Structure Defination
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

}

void InsertLast(PPNODE first, int iNo)                              // Function defination
{

}

void InsertAtPos(PPNODE first, int iNo, int pos)                    // Function defination
{

}

void DeleteFirst(PPNODE first)                                      // Function defination
{

}

void DeleteLast(PPNODE first)                                       // Function defination
{

}

void DeleteAtPos(PPNODE first, int pos)                             // Function defination
{

}

void Display(PNODE first)                                           // Function defination
{

}

int Count(PNODE first)                                              // Function defination
{

    return 0;
}

int main ()                                                         // Main Method
{
    PNODE head = NULL;                                              // Pointer to node


    return 0;
}