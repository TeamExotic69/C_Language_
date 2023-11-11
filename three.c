#include<stdio.h>
//#include<conio.h>
void main(){
    int length,breadth,area;
    //clrscr();
    printf("Enter leangth and breadth to find area of rectangle: ");
    scanf("%d %d",&length,&breadth);
    area=length*breadth;
    printf("area of rectangle is: %d UNIT",area);
}