// Complete Singly Linear Linked List Operations

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE first, int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = iNo;
    newn -> next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;

        newn -> next = temp;
        *first = newn;
    }
}

void InsertLast(PPNODE first, int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = iNo;
    newn -> next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;

        while((temp -> next) != NULL)
        {
            temp = temp -> next;
        }

        temp -> next = newn;
    }
}

void DeleteFirst(PPNODE first)
{
    PNODE temp = NULL;
    
    if(*first == NULL)
    {
        return;
    }
    else if((*first) -> next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        temp = *first;

        *first = (*first) -> next;

        free(temp);
    }
}

void DeleteLast(PPNODE first)
{
    PNODE temp = NULL;

    if((*first) == NULL)
    {
        return;
    }
    else if(((*first) -> next) == NULL)
    {
        free(*first);
        (*first) = NULL;
    }
    else
    {
        temp = (*first);

        while((temp -> next) -> next != NULL)
        {
            temp = temp -> next;
        }

        free(temp -> next);

        temp -> next = NULL;
    }
}

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d |->",first -> data);
        first = first -> next;
    }
    printf("NULL\n");
}

int Count(PNODE first)
{
    int iCount = 0;

    while(first != NULL)
    {
        iCount++;
        first = first -> next;
    }

    return iCount;
}

void InsertAtPos(PPNODE first, int iNo, int pos)
{
    int iSize = 0;
    int iCnt = 0;

    PNODE newn = NULL;
    PNODE temp = NULL;

    iSize = Count(*first);

    if((pos < 1) || (pos > iSize + 1))  // Filter
    {
        printf("Invalid Position\n");
        return;
    }

    if(pos == 1)    // First position
    {
        InsertFirst(first, iNo);
    }
    else if(pos == iSize + 1)   // Last Position
    {
        InsertLast(first, iNo);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        
        newn -> data = iNo;
        newn -> next = NULL;

        temp = *first;

        for(iCnt = 1; iCnt < (pos - 1); iCnt++)
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next;    // 1
        temp -> next = newn;    // 2
    }


}

void DeleteAtPos(PPNODE first, int pos)                             // Function defination
{
    int iSize = 0;                                                  // Local Variables
    int iCnt = 0;

    PNODE temp = NULL;                                              // Pointer to node
    PNODE target = NULL;

    iSize = Count(*first);                                          // Count Function call

    // Business Logic

    if((pos < 1) || (pos > iSize))                                  // Filter
    {
        printf("Invalid Position\n");
        return;
    }

    if(pos == 1)    // First position
    {
        DeleteFirst(first);                                         // Delete First Element
    }
    else if(pos == iSize)   // Last Position
    {
        DeleteLast(first);                                          // Delete Last Element
    }
    else
    {
        temp = *first;                                              // Xerox

        for(iCnt = 1; iCnt < (pos - 1); iCnt++)                     // Traversal
        {
            temp = temp -> next;
        }

        target = temp -> next;
        
        temp -> next = target -> next; // 1
        free(target);   // 2
    }
}

int main()
{
    PNODE head =NULL;
    int iRet = 0;

    InsertFirst(&head, 51);
    InsertFirst(&head, 21);
    InsertFirst(&head, 11);

    Display(head);

    iRet = Count(head);

    printf("Number of nodes are : %d\n", iRet);

    InsertLast(&head, 101);
    InsertLast(&head, 111);
    InsertLast(&head, 121);

    Display(head);
    iRet = Count(head);
    printf("Number of nodes are : %d\n", iRet);

    DeleteFirst(&head);

    Display(head);
    iRet = Count(head);
    printf("Number of nodes are : %d\n", iRet);

    DeleteLast(&head);

    Display(head);
    iRet = Count(head);
    printf("Number of nodes are : %d\n", iRet);

    InsertAtPos(&head, 105, 3);

    Display(head);
    iRet = Count(head);
    printf("Number of nodes are : %d\n", iRet);

    DeleteAtPos(&head, 3);

    Display(head);
    iRet = Count(head);
    printf("Number of nodes are : %d\n", iRet);

    return 0;
}