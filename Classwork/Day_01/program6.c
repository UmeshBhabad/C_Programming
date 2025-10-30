#include <stdio.h>

//Using Function for Business Logic

int add(int a,int b)                            // Function Definition
{
    int sum=0;
    sum=a+b;                                    // Business Logic
    return sum;
}

int main()
{
    int i=0, j=0, ans=0;                        // Variable Declaration
    
    printf("Enter First Number: \n");           // Input
    scanf("%d",&i);
    
    printf("Enter Second Number: \n");          // Input
    scanf("%d",&j);
    
    ans=add(i,j);                               //Function Call

    printf("Addition is: %d\n",ans);            // Output
    
    return 0;
}