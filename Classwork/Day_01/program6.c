#include <stdio.h>

int add(int a,int b){
    
    int sum=0;
    sum=a+b;// Business Logic
    return sum;
}

int main(){
    
    int i=0, j=0, ans=0;
    
    printf("Enter First Number: \n");
    scanf("%d",&i);
    
    printf("Enter Second Number: \n");
    scanf("%d",&j);
    
    ans=add(i,j);//Function Call

    printf("Addition is: %d\n",ans);
    
    return 0;
}