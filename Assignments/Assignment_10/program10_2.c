// Write a program which accept width & height of a rectangle from user and calculate its area.

///////////////////////////////////////////////////////////////////////////////////
//
// Function Name: RectArea
// Description:   Used to print area.
// Input:         float
// Output:        double
// Author:        Umesh Shivaji Bhabad
// Date:          04/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

double RectArea(float fWidth, float fHeight)
{
    return fWidth * fHeight;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter the Width\n");
    scanf("%f", &fValue1);

    printf("Enter the Height\n");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of Rectangle is %f\n", dRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
// Test Cases
// 
// Input: 5.3   9.78              
// Output: 51.834
//

///////////////////////////////////////////////////////////////////////////////////