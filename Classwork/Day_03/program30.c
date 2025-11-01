// Program

// Using while loop

#include <stdio.h>

void display(int iNum)
{
    int iCount = 0;
    
    iCount = 1;// 1

                // 2
    while(iCount <= iNum)                               //Converting For into while Loop
    {
        printf("%d\t",iCount);// 4
         
          // 3
        iCount++;
    }
}

int main(){

    display(10);                                        // Function Call with Argument
    
    return 0;
}