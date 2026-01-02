// Singly Circular Linked List

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE first, PPNODE last, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = iNo;
    newn -> next = NULL;

    if((*first == NULL) && (*last == NULL)) //@
    {
        *first = newn;
        *last = newn;
    }
    else
    {
        (newn -> next) = *first;
        *first = newn;
    }
    (*last) -> next = *first;
}

void InsertLast(PPNODE first, PPNODE last, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = iNo;
    newn -> next = NULL;

    if((*first == NULL) && (*last == NULL)) //@
    {
        *first = newn;
        *last = newn;   // @
        
    }
    else
    {
        (*last) -> next = newn; // @
        *last = newn;   // @
    }
    (*last) -> next = *first;   // @
}

void InsertAtPos(PPNODE first, PPNODE last, int iNo, int Pos)
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
    do
    {
        printf("|%d| ->", first -> data);
        first = first -> next;
    }while(first != last -> next);
    printf("\n");
}

int Count(PNODE first, PNODE last)                              // Function defination
{
    int iCount = 0;                                             // Local Variable

    do                                                          // Business Logic
    {
        iCount++;
        first = first -> next;
    }while(first != last-> next);

    return iCount;
}

int main()                                                          // Main Method
{
    PNODE head = NULL;                                              // Pointer to node
    PNODE tail = NULL;  // @
    int iRet = 0;                                                   // Local Variable


    InsertFirst(&head, &tail, 51);                                  // Function call
    InsertFirst(&head, &tail, 21);
    InsertFirst(&head, &tail, 11);

    Display(head, tail);                                            // Display Function call
    iRet = Count(head, tail);
    printf("Number of nodes are : %d \n", iRet);

    InsertLast(&head, &tail, 101);                                  // Function call
    InsertLast(&head, &tail, 111);
    InsertLast(&head, &tail, 121);

    Display(head, tail);                                            // Display Function
    iRet = Count(head, tail);
    printf("Number of nodes are : %d \n", iRet);

    return 0;
}