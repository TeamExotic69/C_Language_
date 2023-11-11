#include<stdio.h>
//#include<conio.h>
void main(){
    float pa, rate, time,SI;
    //clrscr();
    printf("Enter Principle Amount(In Rupees), Rate(in Percentage), Time(Years)");
    scanf("%f %f %f",&pa,&rate,&time);
    SI=(pa*rate*time)/100;
    printf("Simple Intrest is: %f",SI);
}