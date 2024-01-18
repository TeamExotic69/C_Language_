//WAP enter number and check it is Armstrong number or not 370,371,407 are Armstrong no.
#include<stdio.h>
// #include<conio.h>
void main(){
    int n,rem,sum,m;
    sum=0;
    // clrscr();
    printf("Enter any three digit number: ");
    scanf("%d",&n);
    m=n;
    while(n>0){
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    }
    if (sum==m){
        printf("Yes This is Armstrong number %d",sum);
    }
    else{
        printf("No! this is not an Armstrong number");
    }
    
}