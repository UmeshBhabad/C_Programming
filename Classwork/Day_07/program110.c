
#include <stdio.h>

int main()
{
    int arr[] = {10,20,30,40};        // Static Array Declaration

    printf("%d\n",arr);             // prints address of first element(pointer to the first element of the array)
    
    // prints array elements
    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);
    printf("%d\n",arr[3]);

    return 0;
}