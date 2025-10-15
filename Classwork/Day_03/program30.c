#include <stdio.h>
void display(int iNum){
    int iCount=0;
    
    iCount=1;
    while(iCount<=iNum){                    //Converting For into while Loop
        printf("%d\t",iCount);
        iCount++;
    }
}
int main(){

    display(10);
    return 0;
}