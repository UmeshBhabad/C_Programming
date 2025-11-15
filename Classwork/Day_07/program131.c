
#include <stdio.h>
#include <stdlib.h>

int Average(int Arr[], int iSize)                                       
{
    int iCnt = 0, iSum = 0;
    int iCount = iSize;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum += Arr[iCnt];
    }

    return (iSum / iCount);       // Issue
}

int main()
{  
    int iLength = 0;
    int *ptr = NULL;
    int iCnt = 0;
    float fRet = 0.0;
    
    printf("Enter Number of Elements : \n");
    scanf("%d", &iLength);

    ptr = (int *)malloc(iLength*sizeof(int));

    if(NULL == ptr)                                                            // Industrial way of coding
    {
        printf("Unable to locate the memory");
        return -1;
    }

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }


    fRet = Average(ptr, iLength);

    printf("Average of the elements is %f\n", fRet);

    free(ptr);

    return 0;
}