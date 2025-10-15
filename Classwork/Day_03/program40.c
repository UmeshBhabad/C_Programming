#include <stdio.h>
void display(int iNum){
    int iCount=0;
    for(iCount=2;iCount<=iNum;iCount=iCount+2){
        printf("%d\t",iCount);
    }
}

// Time Complexity: O(N/2)
int main(){

    int iValue=0;
    printf("Please Enter the frequency: ");
    scanf("%d",&iValue);
    display(iValue);
    return 0;
}