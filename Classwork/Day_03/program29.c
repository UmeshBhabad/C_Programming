// Program

// Using loop write a program to display 1 to 5 using function.

#include <stdio.h>
void display()
{
    int iCount = 0;
    //       1         2            3    
    for(iCount = 1; iCount <= 5; iCount++)                                  // Using For Loop
    {
        printf("%d\t",iCount);// 4
    }
}

int main()
{
    display();
    return 0;
}
