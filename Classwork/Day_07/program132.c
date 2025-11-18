// Accept N numbers and find its average

#include <stdio.h>
#include <stdlib.h>

int Average(int Arr[], int iSize)                           // Function to find average
{
    int iCnt = 0, iSum = 0;                                 // Local Variables
    int iCount = iSize;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)                     // Business Logic
    {
        iSum += Arr[iCnt];
    }

    return ((float)iSum / (float)iCount);                   // Explicitly converting to float
}

int main()
{  
    int iLength = 0;                                        // Local Variables
    int *ptr = NULL;
    int iCnt = 0;
    float fRet = 0.0;
    
    printf("Enter Number of Elements : \n");                // Accept input array length
    scanf("%d", &iLength);

    ptr = (int *)malloc(iLength*sizeof(int));               // pointer to array, Memory allocation

    if(NULL == ptr)                                         // Industrial way of coding
    {
        printf("Unable to locate the memory");
        return -1;
    }

    printf("Enter the elements : \n");                      // Accept array elements

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }


    fRet = Average(ptr, iLength);                           // Function call

    printf("Average of the elements is %f\n", fRet);        // Output

    free(ptr);                                              // Deallocate allocated memory

    return 0;
}