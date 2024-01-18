#include<stdio.h>
//#include<conio.h>
void main(){
    float radius,area,circumference;
    //clrscr();
    printf("enter radius of circle: ");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    circumference=2*3.14*radius;
    printf("Area of Circle: %f \n",area);
    printf("Circumference of Circle: %f",circumference);
}