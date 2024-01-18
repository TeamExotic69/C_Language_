#include<stdio.h>
// #include<conio.h>
void main(){
    int n;
    // clrscr();
    printf("Enter any number: ");
    scanf("%d",&n);
    if(n==1)
    printf("This  is ODD number");
    else if(n%2==0)
    printf("This  is even number"); 
    else 
    printf("This is an odd number");
}