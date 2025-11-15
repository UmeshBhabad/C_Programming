
#include <stdio.h>

int main()
{
    int arr[]={10,20,30,40};

    printf("%d\n",arr);
    printf("%d\n",&arr);
    printf("%d\n",&(arr[0]));
    printf("%d\n",sizeof(arr));

    return 0;
}