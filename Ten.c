#include<stdio.h>
// #include<conio.h>
void main(){
    int m,t,n,i;
    t=0;
    // clrscr();
    printf("Entre any 5 digit number: ");
    scanf("%d",&n);
    for(i=1;i<=5;i++){
        m=n%10;
        t=t+m;
        n=n/10;
    }
    printf("sum of digits is:%d",t);
}