#include <stdio.h>
void display(int iNum){
    int iCount=0;
    for(iCount=1;iCount<=iNum;iCount++){
        
        if(iCount%2==0){
            printf("%d\t",iCount);
        }
        
    }
}

// Time Complexity: O(N)

int main(){

    int iValue=0;
    printf("Please Enter the frequency: ");
    scanf("%d",&iValue);
    display(iValue);
    return 0;
}