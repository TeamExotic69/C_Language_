#include<stdio.h>
// #include<conio.h>
int main(){
    int x,i,j;
    // clrscr();
    printf("Enter number of times you want to print patern: ");
    scanf("%d",&x);
    for(i=0;i<x;i++){
        for(j=i;j>0;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
