#include<stdio.h>
//#include<conio.h>
void main(){ 
    float f, C, T;
    //clrscr();
    printf("Enter Temperature in Fahrenheit: ");
    scanf("%f",&f);
    C=((f-32)*5)/9;
    printf("temperature in Celsius is:%f",C);
}
