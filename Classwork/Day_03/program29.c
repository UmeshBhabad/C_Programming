#include <stdio.h>
void display(){
    int iCount=0;
    for(iCount=1;iCount<=5;iCount++){
        printf("%d\t",iCount);
    }
}
int main(){

    display();
    return 0;
}

/*
#include <stdio.h>
void display(int iNum){
    int iCount=0;
    for(iCount=1;iCount<=iNum;iCount++){
        printf("%d\t",iCount);
    }
}
int main(){

    display(10);
    return 0;
}
*/