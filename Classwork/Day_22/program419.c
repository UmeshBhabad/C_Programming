#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
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

    (*last) -> next = *first;
    (*first) -> prev = *last;
}

void InsertLast(PPNODE first, PPNODE last, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = iNo;
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

    (*last) -> next = *first;
    (*first) -> prev = *last;
}

void DeleteFirst(PPNODE first, PPNODE last)
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

void DeleteLast(PPNODE first, PPNODE last)
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

        (*last) -> next = *first;
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

void InsertAtPos(PPNODE first, PPNODE last, int iNo, int pos)                   // Function Defination
{
    int iSize = 0;                                                              // Local Variables
    int iCnt = 0;

    PNODE newn = NULL;                                                          // Pointer to nodes
    PNODE temp = NULL;

    iSize = Count(*first, *last);                                               // Count function call

    if(pos < 1 || pos > iSize + 1)                                              // Filter 
    {
        printf("Invalid Position\n");
        return;
    }

    if(pos == 1)
    {
        InsertFirst(first, last, iNo);                                          // Insert at first position
    }
    else if(pos == iSize + 1)
    {
        InsertLast(first, last, iNo);                                           // Insert at last position
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));                                     // Memory allocation

        newn -> data = iNo;                                                     // Assigning Values
        newn -> next = NULL;
        newn -> prev = NULL;

        temp = *first;                                                          // Xerox

        for(iCnt = 1; iCnt < pos -1; iCnt++)                                    // Traversal
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next;
        newn -> next -> prev = newn;

        temp -> next = newn;
        newn -> prev = temp;
    }
}

void DeleteAtPos(PPNODE first, PPNODE last, int pos)                            // Function defination
{
    int iSize = 0;                                                              // Local Variables
    int iCnt = 0;

    PNODE temp = NULL;                                                          // pointer to null

    iSize = Count(*first, *last);                                               // Count Function call

    if(pos < 1 || pos > iSize)                                                  // Filter
    {
        printf("Invalid Position\n");
        return;
    }

    if(pos == 1)
    {
        DeleteFirst(first, last);                                               // Delete at first Position
    }
    else if(pos == iSize)
    {
        DeleteLast(first, last);                                                // Delete at last position
    }
    else
    {
        temp = *first;

        for(iCnt = 1; iCnt < pos -1; iCnt++)
        {
            temp = temp -> next;
        }

        temp -> next = temp -> next -> next;
        free(temp -> next -> prev);
        temp -> next -> prev = temp;

        
    }
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