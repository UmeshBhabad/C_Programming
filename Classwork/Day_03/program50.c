// Factors of 6
#include <stdio.h>

void  DisplaynonFactors(int iNo){
    int iCnt=0;
    
    if(iNo<0){
        iNo= -iNo;
    }
    for(iCnt=1; iCnt<= (iNo/2); iCnt++){
        if(iNo%iCnt!=0){
            printf("%d\n",iCnt);
        }
    }
    
        
    
}

// Time Complexity: O(N/2)
int main(){

    int iValue=0;
    
    printf("Enter the Number: ");
    scanf("%d",&iValue);

    DisplaynonFactors(iValue);


    return 0;
}