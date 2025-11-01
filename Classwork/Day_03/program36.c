// Program

// Program to demonstrate Function with Argument and without Return Value(using loop)

#include <stdio.h>
void display(int iNum)                                                // Function Definition(with Argument)
{
    int iCount = 0;
    for(iCount = 1; iCount <= iNum; iCount++)                         // Loop
    {
        printf("%d\t",iCount);
    }
}
int main(){

    display(7);                                                     // Function Call
    
    return 0;
}