#include<stdio.h>
//#include<conio.h>
void main() {
    float base ,height,area;
    //clrscr();
    printf("Enter Base and Height of Triangle: ");
    scanf("%f %f",&base ,&height);
    area = (base)*(height)*0.5;
    printf("Area of Triangle:%f",area);
} 