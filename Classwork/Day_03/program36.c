#include <stdio.h>
void display(int iNum){
    int iCount=0;
    for(iCount=1;iCount<=iNum;iCount++){
        printf("%d\t",iCount);
    }
}
int main(){

    display(7);
    return 0;
}