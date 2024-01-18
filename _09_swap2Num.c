#include<stdio.h>
//--------------------------------------incomplete program--------------------------------------
void main(){
    int n,rn,a;
    printf("Enter a number: ");
    scanf("%d",&n);
    while (n>0){
        n=n/10;
        a=n;
    }
    printf("number is %d",a);   
}