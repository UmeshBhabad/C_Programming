// Accept N Numbers from user and return the count of odd numbers

#include <stdio.h>
#include <stdlib.h>

int CountOdd(int Arr[], int iSize)                              // Function to count odd numbers
{
    int iCnt = 0, iCount = 0;                                   // Local Variables
    
    for(iCnt = 0; iCnt < iSize; iCnt++)                         // Traversal through array
    {
        if(Arr[iCnt] % 2 == 1)                                  // Business Logic
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{  
    int iLength = 0;                                            // Local Variables
    int *ptr = NULL;
    int iCnt = 0, iRet = 0;
    
    printf("Enter Number of Elements : \n");                    // Accept input array length
    scanf("%d", &iLength);

    ptr = (int *)malloc(iLength*sizeof(int));                   // pointer to array, Memory allocation

    if(NULL == ptr)                                             // check for an empty array
    {
        printf("Unable to locate the memory");
        return -1;
    }

    printf("Enter the elements : \n");                          // Accept array elements

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }


    iRet = CountOdd(ptr, iLength);                              // Function call

    printf("Count of odd number in a array is %d\n", iRet);     // Output

    free(ptr);                                                  // Deallocate allocated memory

    return 0;
}