#include<stdio.h>
//#include<conio.h>
void main(){
    int side,area;
    //clrscr();
    printf("Enter side of square: ");
    scanf("%d" ,&side);
    area=side*side;
    printf("area of square is %d",area); 
}
/*
#include<stdio.h>
void main() {
    float base ,height,area;
    printf("Enter base and height of triangle");
    scanf("%f %f",&base ,&height);
    area = (base*height)/2.0;
    printf("area of triangle:%f",area);
    //return 0;
}  
*/