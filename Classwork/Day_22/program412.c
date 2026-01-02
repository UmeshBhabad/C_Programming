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

void DeleteLast(PPNODE first, PPNODE last)
{
    PNODE temp = NULL;
    
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

        while(temp -> next != (*last))
        {
            temp = temp -> next;
        }

        free(*last);
        *last = temp;

        (*last) -> next = (*first);
    }
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

void InsertAtPos(PPNODE first, PPNODE last, int iNo, int pos)
{
    int iSize = 0;
    int iCnt = 0;

    PNODE newn = NULL;
    PNODE temp = NULL;

    iSize = Count(*first, *last);

    if(pos < 1 || pos > iSize + 1)
    {
        printf("Invalid Position");
        return;
    }

    if(pos == 1)
    {
        InsertFirst(first, last, iNo);
    }
    else if(pos == iSize + 1)
    {
        InsertLast(first, last, iNo);
    }
    else
    {
        temp = *first;

        newn = (PNODE)malloc(sizeof(NODE));
        newn -> data = iNo;
        newn -> next = NULL;

        for(iCnt = 1; iCnt < pos -1; iCnt++)
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next;
        temp -> next = newn;
    }
}

void DeleteAtPos(PPNODE first, PPNODE last, int pos)            // Function defination
{
    int iSize = 0;                                              // Local Variables
    int iCnt = 0;

    PNODE temp = NULL;                                          // Pointers to node
    PNODE target = NULL;

    iSize = Count(*first, *last);                               // Count Function call

    if(pos < 1 || pos > iSize)                                  // Filter
    {
        printf("Invalid Position");
        return;
    }

    if(pos == 1)    // Case 1: node at first position
    {
        DeleteFirst(first, last);                               // Delete at First position
    }
    else if(pos == iSize)   // Case 2: node at last position
    {
        DeleteLast(first, last);                                // Delete at Last Position
    }
    else    // Case 3: node at any position
    {
        temp = *first;                                          // Xerox

        for(iCnt = 1; iCnt < pos - 1; iCnt++)                   // Traversal
        {
            temp = temp -> next;
        }

        target = temp -> next;                                  // Assign target node

        temp -> next = target -> next;
        free(target);                                           // Deallocate the memory
    }
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

    InsertAtPos(&head, &tail, 105, 3);

    Display(head, tail);
    iRet = Count(head, tail);
    printf("Number of nodes : %d\n", iRet);

    DeleteAtPos(&head, &tail, 3);

    Display(head, tail);
    iRet = Count(head, tail);
    printf("Number of nodes : %d\n", iRet);

    return 0;
}