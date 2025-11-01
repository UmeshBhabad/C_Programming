// Program

// Reduced Approach(Use even numbers approach, iCount=iCount+2----->iCount+=2)
// 2    4   6(for iValue=7)

#include <stdio.h>

void display(int iNum)                                                  // Function defination
{
    int iCount = 0;                                                     // Loop counter

    for(iCount = 2; iCount <= iNum; iCount += 2)                        // for loop(updatation of +2)
    {                   
        if(iCount % 2 == 0)                                             // Business Logic
        {
            printf("%d\t",iCount);
        }
        
    }
}

int main()
{
    int iValue = 0;
    
    printf("Please Enter the frequency: ");                             // Accept input from user
    scanf("%d",&iValue);
    
    display(iValue);                                                    // Function call
    
    return 0;
}