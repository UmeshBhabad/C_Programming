// Program

// printing * using for loop

#include <stdio.h>
void display()                                          // Function Definition    
{
    int iCount = 0;
    for(iCount = 1; iCount <= 5; iCount++)
    {
        printf("*\t");
    }
}
int main(){

    display();                                          // Function Call
    
    return 0;
}