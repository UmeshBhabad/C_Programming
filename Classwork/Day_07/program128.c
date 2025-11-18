// Accept N numbers from user and print its summation

#include <stdio.h>
#include <stdlib.h>

int Summation(int Arr[], int iSize)                     // Function defination
{
    int iCnt = 0, iSum = 0;                             // Local Variables
    
    for(iCnt = 0; iCnt < iSize; iCnt++)                 // Business Logic
    {
        iSum += Arr[iCnt];
    }

    return iSum;
}

int main()
{  
    int iLength = 0;                                    // Local Variables
    int *ptr = NULL;
    int iCnt = 0, iRet = 0;
    
    printf("Enter Number of Elements : \n");            // Accept input array length
    scanf("%d", &iLength);

    ptr = (int *)malloc(iLength*sizeof(int));           // pointer to array declaration, Dynamic memory allocation

    if(NULL == ptr)                                     // Industrial way of coding
    {
        printf("Unable to locate the memory");
        return -1;
    }

    printf("Enter the elements : \n");                  // Accept array elements

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    iRet = Summation(ptr, iLength);                     // Function call

    printf("Addition is %d\n", iRet);                   // Display Output

    free(ptr);                                          // deallocate allocated memory

    return 0;
}