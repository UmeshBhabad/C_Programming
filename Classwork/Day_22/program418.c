#include <stdio.h>
#include <stdlib.h>

struct node                                                             // Structure Defination
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;                                               // Aliasing Structure
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE first, PPNODE last, int iNo)                    // Function Defination
{
    PNODE newn = NULL;                                                  // pointer to node

    newn = (PNODE)malloc(sizeof(NODE));                                 // Memory allocation

    newn -> data = iNo;                                                 // Assigning Values
    newn -> next = NULL;
    newn -> prev = NULL;

    if(*first == NULL && *last == NULL) // LL is empty
    {
        *first = newn;
        *last = newn;
    }
    else    // LL contains one or more nodes
    {
        newn -> next = *first;
        (*first) -> prev = newn;
        *first = newn;
    }

    (*last) -> next = *first;                                           // Maintaining Circular nature
    (*first) -> prev = *last;
}

void InsertLast(PPNODE first, PPNODE last, int iNo)                     // Function defination
{
    PNODE newn = NULL;                                                  // Pointer to node

    newn = (PNODE)malloc(sizeof(NODE));                                 // Memory allocation

    newn -> data = iNo;                                                 // Assigning values
    newn -> next = NULL;
    newn -> prev = NULL;

    if(*first == NULL && *last == NULL) // LL is empty
    {
        *first = newn;
        *last = newn;
    }
    else    // LL contains one or more nodes
    {
        (*last) -> next = newn;
        newn -> prev = *last;
        *last = newn;
    }

    (*last) -> next = *first;                                           // Maintaining Circular  Nature
    (*first) -> prev = *last;
}

void DeleteFirst(PPNODE first, PPNODE last)                             // Function defination
{
    if(*first == NULL && *last == NULL) // LL is empty
    {
        return;
    }
    else if(*first == *last)        // LL contains one node
    {
        free(*first);
        *first = NULL;
        *last = NULL;
    }
    else    // LL contains more than one node
    {
        
        (*first) = (*first) -> next;
        free((*first) -> prev);
        
        (*last) -> next = *first;
        (*first) -> prev = *last;
    }
}

void DeleteLast(PPNODE first, PPNODE last)                              // Function defination
{
    if(*first == NULL && *last == NULL) // LL is empty
    {
        return;
    }
    else if(*first == *last)        // LL contains one node
    {
        free(*first);
        *first = NULL;
        *last = NULL;
    }
    else    // LL contains more than one node
    {
        *last = (*last) -> prev;
        free((*last) -> next);

        (*last) -> next = *first;                                       // Maintaining Circular nature
        (*first) -> prev = *last;
    }
}

void Display(PNODE first, PNODE last)
{
    if(first == NULL && last == NULL)   // Important
    {
        printf("Linked List is empty\n");
        return;
    }
    
    printf("\n <=>");
    do
    {
        printf("| %d | <=>", first -> data);
        first = first -> next;
    } while (first != last -> next); 
    printf("\n");   
}

int Count(PNODE first, PNODE last)
{
    int iCount = 0;

    if(first == NULL && last == NULL)   // Important
    {
        return 0;
    }

    do
    {
        iCount++;
        first = first -> next;
    } while (first != last -> next); 

    return iCount;
}

void InsertAtPos(PPNODE first, PPNODE last, int iNo, int pos)
{

}

void DeleteAtPos(PPNODE first, PPNODE last, int pos)
{

}

int main()
{
    PNODE head = NULL;
    PNODE tail = NULL;

    int iRet = 0;

    InsertFirst(&head, &tail, 51);
    InsertFirst(&head, &tail, 21);
    InsertFirst(&head, &tail, 11);
    
    Display(head, tail);

    iRet = Count(head, tail);
    printf("Number of nodes : %d\n", iRet);

    InsertLast(&head, &tail, 101);
    InsertLast(&head, &tail, 111);
    InsertLast(&head, &tail, 121);
    
    Display(head, tail);

    iRet = Count(head, tail);
    printf("Number of nodes : %d\n", iRet);

    DeleteFirst(&head, &tail);
    
    Display(head, tail);

    iRet = Count(head, tail);
    printf("Number of nodes : %d\n", iRet);

    DeleteLast(&head, &tail);
    
    Display(head, tail);

    iRet = Count(head, tail);
    printf("Number of nodes : %d\n", iRet);

    return 0;
}