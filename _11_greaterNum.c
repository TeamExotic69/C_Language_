#include<stdio.h>
// #include<conio.h>
void main(){
    int a,b,n;
    // clrscr();
    printf("Enter any two numbers: ");
    scanf("%d %d",&a,&b);
    if (a>b){
        printf("%d is greater number",a);
    }
    else if (b>a)
    {
        printf("%d is greater number",b);
    }
    else
    printf("BOTH ARE EQUAL");
    
}
