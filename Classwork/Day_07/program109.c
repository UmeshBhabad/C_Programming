
#include <stdio.h>

int main()
{
    int arr[] = {10,20,30,40};              // Static Array Declaration

    printf("%d\n",arr);                     // pointer to first element of array(prints address of first element)
    printf("%d\n",&arr);                    // pointer to entire array(prints address of first element)
    printf("%d\n",&(arr[0]));               // pointer to first element of array(prints address of first element)
    printf("%d\n",sizeof(arr));             // size of entire array (4*4=16 bytes)

    return 0;
}