#include<stdio.h>
#include<math.h>
// #include<conio.h>
/*------------only for 5 digit number-----------*/
void main(){
    int n,a,b,x;
    b=0;
    x=4;
    // clrscr();
    printf("Enter any number:");
    scanf("%d",&n);
    for(int i=1;i<=5;i++){
        a=n%10;
        b=b+(a*pow(10,x));
        n=n/10;
        x--;
    }
    printf("Reverse  of this number is:%d",b);
}