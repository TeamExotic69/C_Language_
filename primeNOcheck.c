#include<stdio.h>
//#include<conio.h>
void main(){
    int n,d;
    printf("Enter any number: ");
    scanf("%d",&n);
    for(d=2;d<=(n^1/2);d++){
    if (n%d==0){
        printf("This number is NOT a prime ");
        break;
    }
    else {
        printf("THIS IS A PRIME NUMBER");
        break;
    }
    }
}