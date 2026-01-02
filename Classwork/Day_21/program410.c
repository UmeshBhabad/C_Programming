// Singly Linear Linked List

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
    PNODE temp =NULL;
    if(*first == NULL && *last == NULL) // case 1
    {
        return;
    }
    else if(*first == *last)    // case 2
    {
        free(*first);
        *first = NULL;
        *last = NULL;
    }
    else    // case 3
    {
        temp = *first;
        *first = (*first) -> next;
        free(temp);
        (*last) -> next = *first;


        /*
        *last = *first -> next;
        free(*first);
        *first = *last -> next;
        */
    }
}

void DeleteLast(PPNODE first, PPNODE last)                              // Function defination
{
    PNODE temp = NULL;                                                  // Pointer to node
    
    if(*first == NULL && *last == NULL) // case 1: LL is empty
    {
        return;                                                         // No node to delete
    }
    else if(*first == *last)    // case 2: LL contains 1 node
    {
        free(*first);                                                   // Deallocate the memory
        *first = NULL;
        *last = NULL;
    }
    else    // case 3: LL contains more than 1 node
    {
        temp = *first;                                                  // Xerox

        while(temp -> next != (*last))                                  // Traversal
        {
            temp = temp -> next;
        }

        free(*last);                                                    // Deallocate the memory
        *last = temp;

        (*last) -> next = (*first);                                     // Maintain circular nature
    }
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

int Count(PNODE first, PNODE last)
{
    int iCount = 0;

    do
    {
        iCount++;
        first = first -> next;
    }while(first != last-> next);

    return iCount;
}

int main()
{
    PNODE head = NULL;
    PNODE tail = NULL;  // @
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