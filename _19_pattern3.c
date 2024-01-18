#include<stdio.h>
// #include<conio.h>
void main(){
    int x,i,j;
    // clrscr();
    printf("Enter number of times you want to print patern: ");
    scanf("%d",&x);
    for(i=x;i>0;i--){
        for(j=i;j>0;j--){
            printf("*");
        }
        printf("\n");
    }
}