// Accept N numbers of user as well as another number and check whether the number is present in the array.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int * IPTR;

// < O(N)
bool LinearSearch(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
            break;
        } 
    }
    
    if(iCount > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iLength = 0;
    int iCnt = 0;
    bool bRet = false;
    int iValue = 0;
    IPTR iPtr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d", &iLength);

    // Step 1 : Allocate the memory
    iPtr = (IPTR)malloc(iLength * sizeof(int)); 
    
    if(NULL == iPtr)
    {
        printf("Unable to allocate the memory.\n");
        return -1;
    }

    printf("Enter the Elements :\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &iPtr[iCnt]);
    }

    printf("Enter the Value to Search : \n");
    scanf("%d", &iValue);

    // Step 2 : Use the Memory
    
    bRet = LinearSearch(iPtr, iLength, iValue);

    if(bRet == true)
    {
        printf("%d is Present in the Data\n", iValue);
    }
    else
    {
        printf("%d is Not Present in the Data\n", iValue);
    }

    // Step 3 : Free the memory.

    free(iPtr);

    return 0;
}