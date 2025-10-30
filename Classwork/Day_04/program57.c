#include <stdio.h>
#include <stdbool.h>

bool CheckPrime(int iNo){

    int iCnt=0;
    bool bFlag=true;

    if(iNo<0){
        iNo=-iNo;
    }

    // Input : 6   iCnt = 2
    
    for(iCnt=2; iCnt <= iNo/2; iCnt++){
        
        if(iNo % iCnt == 0)
        {
            bFlag= false;
            break;                                      //Optimizaton
        }

    }

    return bFlag;

}
int main(){

    int iValue=0;
    bool bRet=false;
    
    printf("Enter the Number: ");
    scanf("%d",&iValue);

    bRet=CheckPrime(iValue);

    if(bRet==true){
        printf("%d is a Prime Number",iValue);
    }else{
        printf("%d is not a Prime Number",iValue);
    }

    return 0;
}

/*
Time Complexity : for Prime= O(N/2)

Time Complexity : for Non- Prime= either 1 or 2
*/