#include <stdio.h>
void display(int iNum){
    int iCount=0;
    for(iCount=1;iCount<=iNum;iCount+=2){           //
        if(iCount%2==0){
            printf("%d\t",iCount);
        }
        
    }
}
int main(){

    int iValue=0;
    printf("Please Enter the frequency: ");
    scanf("%d",&iValue);
    display(iValue);
    return 0;
}