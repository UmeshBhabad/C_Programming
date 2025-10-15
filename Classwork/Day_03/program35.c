#include <stdio.h>
void display(){
    int iCount=0;
    for(iCount=5;iCount>=1;iCount--){
        printf("%d\t",iCount);

    }
    printf("\n");
}
int main(){

    display();
    return 0;
}