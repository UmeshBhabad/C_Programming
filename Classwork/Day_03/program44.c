#include <stdio.h>
#include <stdbool.h>

bool isDivisible(int iValue1,int iValue2){
    
    if((iValue1%iValue1)==0)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main(){

    int iNum1,iNum2=0;
    bool bRet=false;

    printf("Enter First Number: ");
    scanf("%d",&iNum1);

    printf("Enter Second Number: ");
    scanf("%d",&iNum2);

    
    bRet = isDivisible(iNum1,iNum2);

    if(bRet==true)
    {
        printf("It is completely Divisible");
    }
    else
    {
        printf("Not divisible");
    }

    return 0;
}