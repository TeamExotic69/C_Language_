#include<stdio.h>
void main(){
    int x,i;
    printf("Enter number of times you want to print patern: ");
    scanf("%d",&x);
    for(i=0;i<x;i++){
        printf("\n");
        for(int j=i;j>0;j--){
            printf("*");
        }
    }
}