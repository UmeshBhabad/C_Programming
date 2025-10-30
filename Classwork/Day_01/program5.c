#include <stdio.h>

//Dynamic Approach(Taking Input from User)

int main()
{
    
    int i=0, j=0, ans=0;                    //Variable Declaration and Initialization
    
    printf("Enter First Number: \n");       //Input
    scanf("%d",&i);
    
    printf("Enter Second Number: \n");      //Input
    scanf("%d",&j);
    
    ans=i+j;                                //Business Logic

    printf("Addition is: %d\n",ans);        //Output
    
    return 0;
}