#include<stdio.h>
//#include<conio.h>
void main(){
    float bs,da,ta,hra,gs;
    //clrscr();
    printf("Enter Basic Salary: ");
    scanf("%f",&bs);
    da=(10*bs)/100;
    ta=(12*bs)/100;
    hra=(10*bs)/100;
    gs=da+ta+hra+bs;
    printf("Your Gross Salary is: %f",gs);
}