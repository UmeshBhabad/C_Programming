// Write a program which accept distance in kilometer from user and convert it into meter ( 1 Kilometer = 1000 meter).

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: KMtoMeter
// Description:   Used to Convert KM to meter.
// Input:         float
// Output:        double
// Author:        Umesh Shivaji Bhabad
// Date:          04/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int KMtoMeter(int iNo)
{
    return iNo * 1000;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance\n");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("%d", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: 5                  
// Output: 5000
//
// Input: 12                   
// Output: 12000
//
///////////////////////////////////////////////////////////////////////////////////