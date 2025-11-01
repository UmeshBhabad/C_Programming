// Program

// Program to extract digits from a number

#include <stdio.h>

int main()
{
    int iNo = 7236;                                           // Variable Declaration
    int iDigit = 0;

    // Logic to extract digits

    iDigit = iNo % 10;                                  
    printf("%d\n",iDigit);
    iNo = iNo / 10;

    iDigit = iNo % 10;
    printf("%d\n",iDigit);
    iNo = iNo / 10;

    iDigit = iNo % 10;
    printf("%d\n",iDigit);
    iNo = iNo / 10;

    iDigit = iNo % 10;
    printf("%d\n",iDigit);
    iNo = iNo / 10;

    return 0;
}