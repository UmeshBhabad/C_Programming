
#include <stdio.h>
#include <stdlib.h>

int CountEven(int Arr[], int iSize)                                       
{
    int iCnt = 0, iCount = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{  
    int iLength = 0;
    int *ptr = NULL;
    int iCnt = 0, iRet = 0;
    
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


    iRet = CountEven(ptr, iLength);

    printf("Count of even number in a array is %d\n", iRet);

    free(ptr);

    return 0;
}