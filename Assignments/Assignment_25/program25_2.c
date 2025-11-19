// Accept N numbers from user and display all such elements which are divisible by 5.

///////////////////////////////////////////////////////////////////////////////////////
// 
// Function     : 
// Description  : 
// Input        : 
// Output       :
// Author       :
// Date         :
// 
///////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

// Logic Method

void Display(int Arr[], int iSize)                      // Function defination
{
    int iCnt = 0;                                       // Local Variables

    for(iCnt = 0; iCnt < iSize; iCnt++)                 // Business Logic
    {
        if(Arr[iCnt] % 5 == 0)
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
}

// Time Complexity : O(n)

// Main Method

int main()
{
    int iLength = 0;                                    // Local Variables
    int iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;

    printf("Enter the Array length : \n");              // Accept input array length
    scanf("%d", &iLength);

    ptr = (int *)malloc(iLength * sizeof(int));         // pointer to array, Memory allocation

    if(NULL == ptr)                                     // Check if memory is allcated
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter the array elements : \n");            // Accept input array elements

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    Display(ptr, iLength);                              // Function call

    free(ptr);                                          // Deallocate the allocated memory

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////
//
// Test Cases
// 
// Input :      N : 6
//              Elements : 85 66 3 80 93 88
//
// Output : 85 80
// 
///////////////////////////////////////////////////////////////////////////////////////